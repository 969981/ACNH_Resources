
uint FUN_0267f050(byte *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar3 = FUN_02582d8c(param_1,1);
  puVar2 = PTR_DAT_04bb4fb8;
  if (uVar3 < 8) {
    if ((((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0') &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
        (uVar3 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb43c0, uVar3 < 8)) &&
       (lVar6 = *(long *)puVar2, *(char *)(lVar6 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_3);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_02648c90(param_1,param_3,0);
        }
      }
      bVar7 = *param_1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_70 = (undefined **)CONCAT71(local_70._1_7_,bVar7);
      uVar5 = FUN_02669430(&local_70);
      lStack_68 = 0xb00;
      if ((uVar5 & 1) == 0) {
        lStack_68 = 0xba4;
      }
      lStack_68 = lVar6 + (ulong)uVar3 * 0x13f0 + 0x4f8 + lStack_68;
      local_70 = &PTR_LAB_04a88430;
      uVar3 = *(uint *)(lStack_68 + 0xa0);
      local_60 = &LAB_026827a4;
      uStack_58 = 0;
      if (0x13 < uVar3) {
        uVar3 = 0x14;
      }
      uVar3 = FUN_0277b494(param_2,param_3,uVar3,&local_70,0,param_4);
      goto LAB_0267f1e4;
    }
  }
  uVar3 = 0;
LAB_0267f1e4:
  return uVar3 & 1;
}

