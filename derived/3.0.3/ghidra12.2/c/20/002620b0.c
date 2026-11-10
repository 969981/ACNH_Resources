
void FUN_002620b0(undefined8 param_1,void *param_2,void *param_3)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (param_3 == (void *)0x0) {
    local_40 = 0x10c07;
  }
  else {
    memcpy(param_3,param_2,0x20);
    (**(code **)(*(long *)((long)param_3 + 0x2e0) + 0x10))
              (&local_40,(long)param_3 + 0x2e0,(long)param_2 + 0x2e0);
    (**(code **)(*(long *)((long)param_3 + 0x120) + 0x10))
              (&local_40,(long)param_3 + 0x120,(long)param_2 + 0x120);
    *(undefined1 *)((long)param_3 + 0x400) = *(undefined1 *)((long)param_2 + 0x400);
    memcpy((void *)((long)param_3 + 0x20),(void *)((long)param_2 + 0x20),0x40);
    *(undefined8 *)((long)param_3 + 0x410) = *(undefined8 *)((long)param_2 + 0x410);
    (**(code **)(*(long *)((long)param_3 + 0x328) + 0x10))
              (&local_40,(long)param_3 + 0x328,(long)param_2 + 0x328);
    (**(code **)(*(long *)((long)param_3 + 400) + 0x10))
              (&local_40,(long)param_3 + 400,(long)param_2 + 400);
    *(undefined1 *)((long)param_3 + 0x401) = *(undefined1 *)((long)param_2 + 0x401);
    memcpy((void *)((long)param_3 + 0x60),(void *)((long)param_2 + 0x60),0x40);
    *(undefined8 *)((long)param_3 + 0x418) = *(undefined8 *)((long)param_2 + 0x418);
    (**(code **)(*(long *)((long)param_3 + 0x370) + 0x10))
              (&local_40,(long)param_3 + 0x370,(long)param_2 + 0x370);
    (**(code **)(*(long *)((long)param_3 + 0x200) + 0x10))
              (&local_40,(long)param_3 + 0x200,(long)param_2 + 0x200);
    *(undefined1 *)((long)param_3 + 0x402) = *(undefined1 *)((long)param_2 + 0x402);
    memcpy((void *)((long)param_3 + 0xa0),(void *)((long)param_2 + 0xa0),0x40);
    *(undefined8 *)((long)param_3 + 0x420) = *(undefined8 *)((long)param_2 + 0x420);
    (**(code **)(*(long *)((long)param_3 + 0x3b8) + 0x10))
              (&local_40,(long)param_3 + 0x3b8,(long)param_2 + 0x3b8);
    (**(code **)(*(long *)((long)param_3 + 0x270) + 0x10))
              (&local_40,(long)param_3 + 0x270,(long)param_2 + 0x270);
    *(undefined1 *)((long)param_3 + 0x403) = *(undefined1 *)((long)param_2 + 0x403);
    memcpy((void *)((long)param_3 + 0xe0),(void *)((long)param_2 + 0xe0),0x40);
    local_40 = 0;
    *(undefined8 *)((long)param_3 + 0x428) = *(undefined8 *)((long)param_2 + 0x428);
    *(undefined1 *)((long)param_3 + 0x404) = *(undefined1 *)((long)param_2 + 0x404);
    *(undefined2 *)((long)param_3 + 0x405) = *(undefined2 *)((long)param_2 + 0x405);
    *(undefined4 *)((long)param_3 + 0x408) = *(undefined4 *)((long)param_2 + 0x408);
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

