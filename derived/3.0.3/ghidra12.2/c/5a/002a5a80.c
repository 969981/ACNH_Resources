
void FUN_002a5a80(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((param_3 < 2) || (0xfffe < param_3)) {
      local_34 = 0x10c07;
    }
    else {
      uVar1 = FUN_0021f454();
      puVar2 = (undefined2 *)FUN_00285d10((ulong)param_3 * 0x5b0,uVar1);
      if (puVar2 != (undefined2 *)0x0) {
        uVar3 = (ulong)param_3;
        puVar4 = puVar2;
        do {
          *puVar4 = 0;
          uVar3 = uVar3 - 1;
          *(undefined1 *)(puVar4 + 1) = 0;
          puVar4[2] = 0;
          *(undefined8 *)(puVar4 + 0x2d4) = 0;
          puVar4 = puVar4 + 0x2d8;
        } while (uVar3 != 0);
      }
      *(undefined2 **)(param_2 + 8) = puVar2;
      *(uint *)(param_2 + 0x10) = param_3;
      local_34 = 0;
    }
  }
  else {
    local_34 = 0x10c02;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

