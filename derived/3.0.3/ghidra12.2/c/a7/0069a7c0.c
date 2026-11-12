
bool FUN_0069a7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long local_2b8 [2];
  ulong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [560];
  
  local_2b8[0] = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2b8[1] = 0;
  local_2a8 = 0;
  FUN_00693484(local_2b8,&local_2a0,1);
  FUN_0069396c(local_2b8,param_4,param_2,param_3);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  memset(auStack_270,0,0x230);
  FUN_00694a2c(auStack_270);
  FUN_00694a74(auStack_270,PTR_LAB_04bdf410,local_2b8);
  uVar5 = FUN_00694a80(auStack_270,uVar1,uVar2);
  bVar4 = false;
  if ((uVar5 & 1) != 0) {
    if ((int)local_2a8 < 1) {
      bVar4 = true;
    }
    else if (*(char *)(local_2b8[0] + 0x29) == '\x01') {
      pcVar6 = (char *)(local_2b8[0] + 0x59);
      uVar5 = 1;
      do {
        uVar7 = uVar5;
        if ((local_2a8 & 0xffffffff) == uVar7) break;
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 0x30;
        uVar5 = uVar7 + 1;
      } while (cVar3 == '\x01');
      bVar4 = (local_2a8 & 0xffffffff) <= uVar7;
    }
    else {
      bVar4 = false;
    }
  }
  FUN_00695e14(auStack_270);
  return bVar4;
}

