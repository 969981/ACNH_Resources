
void FUN_0390ab20(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  
  puVar7 = PTR_DAT_04bcf228;
  puVar6 = PTR_DAT_04bcf220;
  puVar5 = PTR_DAT_04bc1010;
  uVar1 = (uint)*(byte *)(param_1 + 0x39);
  if ((uint)*(byte *)(param_3 + 0x39) <= (uint)*(byte *)(param_1 + 0x39)) {
    uVar1 = (uint)*(byte *)(param_3 + 0x39);
  }
  if (uVar1 != 0) {
    uVar12 = 0;
    do {
      if (*(ushort *)(param_1 + 0x3a) < 10 &&
          (1 << (ulong)(*(ushort *)(param_1 + 0x3a) & 0x1f) & 0x350U) != 0) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x34);
        uVar10 = uVar8;
      }
      else {
        uVar8 = (uint)*(ushort *)(param_1 + 0x34);
        uVar10 = 1;
      }
      uVar8 = uVar8 >> (ulong)(uVar12 & 0x1f);
      if ((int)uVar10 <= (int)uVar8) {
        uVar10 = uVar8;
      }
      if ((*(ushort *)(param_3 + 0x3a) < 10) &&
         ((1 << (ulong)(*(ushort *)(param_3 + 0x3a) & 0x1f) & 0x350U) != 0)) {
        uVar11 = (uint)*(ushort *)(param_3 + 0x34);
        uVar8 = uVar11;
      }
      else {
        uVar11 = (uint)*(ushort *)(param_3 + 0x34);
        uVar8 = 1;
      }
      uVar11 = uVar11 >> (ulong)(uVar12 & 0x1f);
      if ((int)uVar8 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 <= uVar10) {
        uVar10 = uVar8;
      }
      if (uVar10 != 0) {
        uVar8 = 0;
        do {
          local_78 = 0;
          local_90 = 0;
          uVar3 = *(ushort *)(param_1 + 0x30) >> (ulong)(uVar12 & 0x1f);
          uStack_6c = (uint)uVar3;
          uVar4 = *(ushort *)(param_3 + 0x30) >> (ulong)(uVar12 & 0x1f);
          uStack_84 = (uint)uVar4;
          if (uVar3 < 2) {
            uStack_6c = 1;
          }
          local_68 = (uint)*(ushort *)(param_1 + 0x32);
          uVar11 = (uint)(*(ushort *)(param_1 + 0x32) >> (ulong)(uVar12 & 0x1f));
          if (*(short *)(param_1 + 0x3a) != 3) {
            local_68 = 1;
          }
          if (local_68 <= uVar11) {
            local_68 = uVar11;
          }
          if (uVar4 < 2) {
            uStack_84 = 1;
          }
          uStack_64 = 1;
          local_80 = (uint)*(ushort *)(param_3 + 0x32);
          if (*(short *)(param_3 + 0x3a) != 3) {
            local_80 = 1;
          }
          uVar3 = *(ushort *)(param_3 + 0x32) >> (ulong)(uVar12 & 0x1f);
          if (local_80 <= uVar3) {
            local_80 = (uint)uVar3;
          }
          uStack_7c = 1;
          local_88 = uVar8;
          local_70 = uVar8;
          (**(code **)puVar6)(auStack_a0);
          (**(code **)puVar7)(auStack_a0,uVar12,1);
          (**(code **)puVar6)(auStack_b0);
          (**(code **)puVar7)(auStack_b0,uVar12,1);
          lVar9 = *(long *)puVar5;
          uVar11 = *(int *)(param_1 + 0x50) - (uint)*(ushort *)(lVar9 + 0x3da);
          if (*(uint *)(lVar9 + 0x368) <= uVar11) {
            uVar11 = 0;
          }
          uVar2 = *(int *)(param_3 + 0x50) - (uint)*(ushort *)(lVar9 + 0x3da);
          if (*(uint *)(lVar9 + 0x368) <= uVar2) {
            uVar2 = 0;
          }
          (**(code **)PTR_DAT_04bcf230)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)(lVar9 + 0x370) + (long)(int)uVar11 * 0x20 + 0x18),
                     auStack_a0,&local_78,
                     *(undefined8 *)(*(long *)(lVar9 + 0x370) + (long)(int)uVar2 * 0x20 + 0x18),
                     auStack_b0,&local_90,0);
          uVar8 = uVar8 + 1;
        } while (uVar10 != uVar8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar1);
  }
  return;
}

