
uint FUN_0267de70(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  byte local_44 [4];
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_44[0] = *param_1;
      if (7 < local_44[0]) {
        local_44[0] = 0xff;
      }
      lVar5 = FUN_02583354(DAT_055021a0,local_44,1);
      uVar2 = 0;
      if (lVar5 != 0) {
        iVar3 = FUN_0267dfe0(param_1);
        lVar5 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(param_2);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            FUN_02648c90(param_1,param_2,0);
          }
        }
        if (iVar3 < 0) {
          FUN_0267e270(param_1,0,PTR_DAT_04bb37e0,0);
          FUN_0267e140(param_1);
        }
        uVar4 = FUN_0267dfe0(param_1);
        uVar2 = FUN_0267e270(param_1,uVar4,param_2,param_3);
      }
      goto LAB_0267dfb8;
    }
  }
  uVar2 = 0;
LAB_0267dfb8:
  return uVar2 & 1;
}

