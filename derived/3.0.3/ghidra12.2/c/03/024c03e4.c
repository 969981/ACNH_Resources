
void FUN_024c03e4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  fStack_84 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  fStack_78 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_7c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "PlayerScoopDigStump";
  if (*(char *)(param_1 + 0x1920) != '\x01') {
    pcStack_68 = "PlayerScoopDig";
  }
  local_90 = 0xfffe;
  local_88 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_80 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  FUN_0277d4ac(&local_90);
  local_90 = *(undefined8 *)(param_1 + 0x1918);
  FUN_0257d568(0x4120cccd,param_1 + 0x6f8,&local_7c,&local_88);
  iVar8 = (int)local_7c;
  bVar2 = local_7c < 0.0;
  bVar3 = local_74 < 0.0;
  iVar9 = (int)local_74;
  fStack_54 = (float)FUN_016e026c(0,&local_7c,0,0);
  local_58 = (float)(int)((int)((float)iVar8 / 5.0) - (uint)bVar2 & 0xfffffffe) * 5.0 + 5.0;
  local_50 = (float)(int)((int)((float)iVar9 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0;
  FUN_0231ece4(param_1,&local_88,&local_58);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  local_58 = 0.0;
  fStack_54 = 0.0;
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar5,&local_7c,&local_58);
  local_5c = FUN_006f0400(local_7c - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                          local_74 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  local_58 = 0.0;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar5,&local_5c,&local_58);
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar5,&local_70,6,0,0);
  FUN_016dec40(param_1,&local_7c,0,0,0,0,0);
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar1 == 0) {
LAB_024c0690:
    lVar7 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar7 == 0) ||
        ((((*(long *)(lVar7 + 0xb0) == 0 || (*(long *)(*(long *)(lVar7 + 0xb0) + 8) == 0)) ||
          (*(long *)(lVar7 + 0x488) == 0)) ||
         ((*(long *)(*(long *)(lVar7 + 0x488) + 8) == 0 || (*(long *)(lVar7 + 0x2b0) == 0)))))) ||
       (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) == 0)) goto LAB_024c06fc;
    uVar4 = FUN_0277d6c4(&local_90);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024c06fc;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024c0690;
  }
  FUN_023265c0(&local_58,param_1,1);
LAB_024c06fc:
  *(undefined4 *)(param_1 + 0x3a0) = 6;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  local_48 = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_4c = local_74;
  fStack_54 = local_7c;
  local_50 = fStack_78;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_58 = (float)CONCAT31(local_58._1_3_,bVar6);
  local_44 = 1;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

