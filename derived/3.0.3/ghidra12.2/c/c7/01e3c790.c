
undefined8 FUN_01e3c790(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  
  if ((*(uint *)(param_1 + 0x69c) >> 0x13 & 1) == 0) {
    *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x80000;
    if (*(long *)(param_1 + 0x3c0) != 0) {
      FUN_02087b00(*(long *)(param_1 + 0x3c0),3);
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      local_28 = 0.0;
      local_30 = 0;
      if (puVar6 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar6 = &DAT_05240280;
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      FUN_016ff8c0(puVar6,6,&local_30);
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      local_38 = (char *)((ulong)local_38._4_4_ << 0x20);
      local_40 = (undefined *)0x0;
      if (puVar6 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar6 = &DAT_05240280;
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      FUN_016ff8c0(puVar6,10,&local_40);
      if ((((float)local_38 - local_28) * ((float)local_38 - local_28) +
           (local_40._0_4_ - (float)local_30) * (local_40._0_4_ - (float)local_30) <= 10.5625) &&
         (*(long *)(param_1 + 0x68) != 0)) {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
        pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar4 >> 0x14) & 0xff0));
        fVar9 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
        local_28 = local_28 + (pfVar2[2] + fVar9 * pfVar2[3]) * 3.5;
        local_30 = CONCAT44(local_30._4_4_,(float)local_30 + (*pfVar2 + fVar9 * pfVar2[1]) * 3.5);
      }
      lVar8 = *(long *)(param_1 + 0x3c0);
      uVar7 = FUN_02085a50(lVar8,3,0);
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(lVar8 + 0x801) = 1;
        lVar1 = lVar8 + 0x10;
        lVar3 = lVar1 + (ulong)*(uint *)(lVar8 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar8 + 0x294)) {
          lVar3 = lVar1;
        }
        *(float *)(lVar3 + 0x14) = local_28;
        *(undefined8 *)(lVar3 + 0xc) = local_30;
        lVar3 = lVar1 + (ulong)*(uint *)(lVar8 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar8 + 0x294)) {
          lVar3 = lVar1;
        }
        *(undefined1 *)(lVar3 + 0x7e) = 0;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      if (puVar6 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar6 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "NeckPhone";
      FUN_01730910(puVar6 + 600,&local_40);
    }
  }
  return 1;
}

