
uint FUN_024335dc(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_7c;
  undefined4 local_74;
  float fStack_70;
  undefined4 local_6c;
  float fStack_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined *local_50;
  undefined8 local_48;
  
  if ((*(int *)(param_1 + 0x178) == 0) && (sVar3 = *(short *)PTR_DAT_04bb6298, sVar3 != -1)) {
    local_7c = CONCAT44(local_7c._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) ||
         ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4 &&
          (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)))) {
        lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
        if (7 < *(byte *)(param_1 + 0x1ee8)) {
          lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
        }
        local_50 = PTR_DAT_04bb2010 + 0x10;
        local_48 = 0;
        uVar5 = FUN_022ab398(0x40a00000,lVar2 + 0xb0,&local_50);
        if (((uVar5 & 1) != 0) ||
           (uVar5 = FUN_022ab398(0x40d00000,lVar2 + 0xb0,&local_50), (uVar5 & 1) != 0)) {
          local_58 = 0;
          fVar7 = (float)(int)local_48 * 0.5;
          uVar4 = 0;
          if (fVar7 != (float)(int)fVar7) {
            uVar4 = (uint)(fVar7 < 0.0);
          }
          fVar8 = (float)local_48._4_4_ * 0.5;
          uVar6 = 0;
          if (fVar8 != (float)(int)fVar8) {
            uVar6 = (uint)(fVar8 < 0.0);
          }
          local_5c = (float)(int)((int)fVar7 - uVar4) * 10.0 + 5.0;
          local_54 = (float)(int)((int)fVar8 - uVar6) * 10.0 + 5.0;
          local_6c = FUN_016e026c(0,&local_5c,0,0);
          uVar4 = 1;
          local_5e = 0;
          local_64 = 0x1010001;
          local_60 = 1;
          local_74 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
          local_7c = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
          fStack_68 = local_54;
          fStack_70 = local_5c;
          local_58 = local_6c;
          uVar5 = FUN_016f0c64(&local_7c,0);
          if (((uVar5 & 1) != 0) && ((param_2 & 1) == 0)) {
            uVar4 = FUN_0243380c(param_1);
          }
          if ((uVar5 & 1) != 0) goto LAB_02433600;
        }
      }
    }
  }
  uVar4 = 0;
LAB_02433600:
  return uVar4 & 1;
}

