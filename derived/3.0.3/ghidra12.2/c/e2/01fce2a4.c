
void FUN_01fce2a4(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined *local_70;
  undefined8 *puStack_68;
  uint local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_3c;
  float local_34;
  
  puVar1 = (undefined4 *)(param_1 + 0x7840);
  FUN_01ee0790();
  if (*(char *)(param_1 + 0x789f) == '\0') {
    if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x789f) = 1;
    iVar8 = 0x96;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x7880);
    if (iVar8 == 0) {
      local_3c = 0;
      local_34 = 0.0;
      FUN_021f4b30(&local_3c,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,puVar1,
                   param_1 + 0x7830,param_1 + 0x7808,param_1 + 0x7868);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar12 = *(float *)(lVar9 + 0x278) + 2.5;
      fVar11 = *(float *)(lVar9 + 0x280) + 2.5;
      if (((int)((float)(int)(float)local_3c / 5.0) - (uint)((float)local_3c < 0.0) !=
           ((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0) & 0xffff)) ||
         (((int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0) & 0xffff) !=
          (int)((float)(int)local_34 / 5.0) - (uint)(local_34 < 0.0))) {
        FUN_01ee01c8(param_1);
        *(undefined1 *)(param_1 + 0x789f) = 0;
        return;
      }
      piVar10 = *(int **)PTR_DAT_04bb47d0;
      if (((piVar10 != (int *)0x0) && (*piVar10 != 0 || piVar10[2] != 0)) &&
         (*piVar10 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar10 + 0x2c) = 1;
      }
      uVar5 = DAT_053e0cf4;
      uVar4 = DAT_053e0cec;
      uVar3 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0xaa18) = DAT_053e0cf8;
      *(undefined8 *)(param_1 + 0xaa04) = uVar3;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar4;
      uVar6 = DAT_053e0cfc;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar5;
      *(undefined4 *)(param_1 + 0xaa1c) = uVar6;
      uVar5 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined4 *)(param_1 + 0xaa20) = uVar5;
      FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
      puVar2 = PTR_DAT_04bb43c0;
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *puVar1;
      uStack_4c = *(undefined4 *)(param_1 + 0x7844);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar1);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
            local_48 = lVar9;
          }
        }
      }
      iVar8 = FUN_01ae98d0(&local_58);
      local_5c = (uint)(long)((float)iVar8 * 90.0 * 11930465.0);
      if (*(char *)(param_1 + 0x789c) != '\0') {
        local_5c = local_5c ^ 0x80000000;
      }
      local_70 = PTR_DAT_04bb2020 + 0x10;
      puStack_68 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_5c,PTR_DAT_04bb65b0,&local_70,6);
      *(undefined1 *)(param_1 + 0x789f) = 0;
      return;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    iVar8 = iVar8 + -1;
  }
  *(int *)(param_1 + 0x7880) = iVar8;
  return;
}

