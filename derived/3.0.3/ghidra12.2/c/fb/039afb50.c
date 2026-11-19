
void FUN_039afb50(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  short *psVar15;
  ushort *puVar16;
  
  uVar3 = *(uint *)(param_1 + 0x70);
  if ((uint)*(byte *)(param_1 + 0xed) <= *(uint *)(param_1 + 0x70)) {
    uVar3 = (uint)*(byte *)(param_1 + 0xed);
  }
  if (uVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x78);
    uVar11 = 0;
    do {
      uVar12 = -(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
      FUN_039aedc0(param_1,param_2,*(undefined4 *)(lVar9 + uVar12));
      uVar1 = uVar11 + 1;
      *(undefined4 *)(lVar9 + uVar12) = 0xffffffff;
      uVar11 = uVar1 & 0xffffffff;
    } while (uVar3 != (uint)uVar1);
  }
  iVar4 = *(int *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0xed) = 0;
  if (iVar4 != 0) {
    lVar9 = *(long *)(param_1 + 0x50);
    iVar8 = 0;
    iVar10 = 0;
    puVar2 = PTR_DAT_04bb3498 + 0x10;
    do {
      psVar15 = (short *)(lVar9 + (long)iVar10 * 0x30);
      if ((*psVar15 != -1 && psVar15[1] != -1) &&
         (lVar7 = (long)*(short *)(lVar9 + (long)iVar10 * 0x30 + 0x18), lVar7 != -1)) {
        plVar13 = *(long **)(lVar9 + (long)iVar10 * 0x30 + 0x10);
        puVar14 = (undefined8 *)**(undefined8 **)(*(long *)(param_2 + 0x38) + lVar7 * 8);
        if (((*PTR_DAT_04bb3490 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3488 = puVar2;
          __cxa_guard_release(PTR_DAT_04bb3490);
        }
        if ((puVar14 != (undefined8 *)0x0) &&
           (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb3488), (uVar11 & 1) == 0)) {
          puVar14 = (undefined8 *)0x0;
        }
        puVar16 = (ushort *)(lVar9 + (long)iVar10 * 0x30 + 0x1a);
        if ((*puVar16 & 1) != 0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,puVar14[0x1b]);
          *puVar16 = *puVar16 & 0xfffe;
          plVar6 = *(long **)(param_1 + 0xc0);
          if ((plVar6 != (long *)0x0) && ((ulong)(long)*psVar15 < 6)) {
            (**(code **)(*plVar6 + *(long *)(&DAT_041b4040 + (long)*psVar15 * 8) * 8))
                      (plVar6,param_1,*(undefined4 *)psVar15,iVar8,plVar13);
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13);
        (**(code **)(*plVar13 + 0x38))(plVar13,puVar14 + 0x1b);
        *(byte *)((long)puVar14 + 0x2e1) =
             *(byte *)((long)puVar14 + 0x2e1) & 0xf |
             (byte)(~(-1 << (ulong)(*(byte *)((long)puVar14 + 0x2e2) & 0x1f)) << 4);
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar10);
  }
  return;
}

