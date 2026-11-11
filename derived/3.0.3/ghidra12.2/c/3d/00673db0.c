
void FUN_00673db0(long param_1,int param_2,long param_3,long param_4,int param_5)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (0 < param_5) {
    uVar3 = param_5 - 4U & 0xfffffffc;
    if (((int)uVar3 < 1) || (uVar4 = *(ushort *)(param_3 + 6), param_2 <= (int)(uint)uVar4)) {
      uVar12 = 0;
      uVar11 = 0;
      if (param_5 < 1) {
        return;
      }
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
      lVar9 = param_4;
      do {
        puVar1 = (ushort *)(param_3 + uVar11 * 2);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        FUN_00675a90(&local_70,&local_80,&local_90,&local_a0,lVar9);
        uVar11 = uVar11 + 4;
        puVar8 = (undefined8 *)(param_1 + (ulong)uVar5 * 0x10);
        puVar8[1] = uStack_68;
        *puVar8 = local_70;
        uVar12 = uVar12 + 0xc;
        puVar8 = (undefined8 *)(param_1 + (ulong)uVar6 * 0x10);
        puVar8[1] = uStack_78;
        *puVar8 = local_80;
        puVar8 = (undefined8 *)(param_1 + (ulong)uVar7 * 0x10);
        puVar8[1] = uStack_88;
        *puVar8 = local_90;
        puVar8 = (undefined8 *)(param_1 + (ulong)uVar4 * 0x10);
        puVar8[1] = uStack_98;
        *puVar8 = local_a0;
        uVar4 = puVar1[7];
        if (param_2 <= (int)(uint)uVar4) break;
        lVar9 = lVar9 + 0x18;
      } while ((int)uVar11 < (int)uVar3);
      uVar12 = uVar12 & 0xfffffffc;
      if (param_5 <= (int)uVar11) {
        return;
      }
    }
    param_4 = param_4 + uVar12 * 2;
    do {
      iVar10 = (int)uVar11;
      if (iVar10 < param_5) {
        uVar11 = 0;
        lVar9 = param_4;
        do {
          uVar4 = *(ushort *)(param_3 + (long)iVar10 * 2 + uVar11 * 2);
          if (param_2 <= (int)(uint)uVar4) {
            return;
          }
          FUN_0067d290(lVar9,param_1 + (ulong)uVar4 * 0x10);
          lVar2 = (long)iVar10 + 1 + uVar11;
          uVar11 = uVar11 + 1;
        } while ((lVar2 < param_5) && (lVar9 = lVar9 + 6, uVar11 < 4));
        uVar11 = (ulong)(uint)(iVar10 + (int)uVar11);
      }
      param_4 = param_4 + 0x18;
    } while ((int)uVar11 < param_5);
  }
  return;
}

