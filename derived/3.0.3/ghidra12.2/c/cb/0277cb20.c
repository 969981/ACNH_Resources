
void FUN_0277cb20(int param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_1 != 0) {
    iVar7 = 0;
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(param_2,iVar7);
      lVar9 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4();
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_70 = *puVar4;
          uStack_6c = puVar4[1];
          local_68 = 0;
          uVar3 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar8 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar8 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(puVar4);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
                 (((puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
                   puVar5 != (uint *)0x0 && (uVar3 = *puVar5, uVar3 != 0)) &&
                  (puVar5 != (uint *)(ulong)uVar3)))) {
                puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
                if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) &&
                   ((ulong)(ushort)puVar6[2] != 0)) {
                  lVar8 = 0xc;
                  if (*(char *)((long)puVar6 + 10) != '\0') {
                    lVar8 = 0x1c;
                  }
                  lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
                  if (lVar8 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar3 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
                    }
                    if (*puVar6 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x86))
                    {
                      FUN_0277b494(iVar7,PTR_DAT_04bb37e0,param_1,param_2,param_3 & 1,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (param_1 != iVar7);
  }
  return;
}

