
let ws = new WebSocket(`ws://${location.host}/ws`)

ws.onmessage = function(event)
{
    let data = JSON.parse(event.data)
    console.log(data)
}
