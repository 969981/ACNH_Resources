
bool FUN_0069a460(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long local_2a8 [2];
  ulong local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [560];
  
  local_2a8[0] = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_2a8[1] = 0;
  local_298 = 0;
  FUN_00693484(local_2a8,&local_290,1);
  FUN_006937cc(local_2a8,param_3,param_2);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  memset(auStack_260,0,0x230);
  FUN_00694a2c(auStack_260);
  FUN_00694a74(auStack_260,PTR_LAB_04bdf410,local_2a8);
  uVar5 = FUN_00694a80(auStack_260,uVar1,uVar2);
  bVar4 = false;
  if ((uVar5 & 1) != 0) {
    if ((int)local_298 < 1) {
      bVar4 = true;
    }
    else if (*(char *)(local_2a8[0] + 0x29) == '\x01') {
      pcVar6 = (char *)(local_2a8[0] + 0x59);
      uVar5 = 1;
      do {
        uVar7 = uVar5;
        if ((local_298 & 0xffffffff) == uVar7) break;
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 0x30;
        uVar5 = uVar7 + 1;
      } while (cVar3 == '\x01');
      bVar4 = (local_298 & 0xffffffff) <= uVar7;
    }
    else {
      bVar4 = false;
    }
  }
  FUN_00695e14(auStack_260);
  return bVar4;
}

