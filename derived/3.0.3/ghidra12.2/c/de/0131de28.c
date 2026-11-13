
void FUN_0131de28(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  
  puVar3 = PTR_DAT_04bb2720;
  if (*(long *)(param_1 + 0x1d0) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x1d0) + 8) & 1) != 0) goto LAB_0131e10c;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar8 = &DAT_055c04a0;
    if (DAT_055c04d8 == 0x565b4aba) goto LAB_0131df3c;
LAB_0131e06c:
    if (*(int *)(puVar8 + 7) == -0xbb9f562) {
      lVar5 = *(long *)puVar3;
      if (lVar5 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(lVar5 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a88;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar8 + 7) == -0xbb9f562) {
        return;
      }
    }
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar4 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
      lVar5 = *(long *)puVar3;
    }
    if (*(int *)(puVar8 + 7) != 0x565b4aba) {
LAB_0131e00c:
      if (lVar5 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(lVar5 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      goto LAB_0131e06c;
    }
    if (lVar5 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar4 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a88;
        if (iVar4 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
LAB_0131df3c:
    if (*(int *)(puVar8 + 7) != 0x565b4aba) {
      lVar5 = *(long *)puVar3;
      goto LAB_0131e00c;
    }
    uVar2 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
    if (DAT_0534f408 <= uVar2) {
      return;
    }
    puVar6 = *(uint **)(DAT_0534f410 + (long)(int)uVar2 * 8);
    if (puVar6 == (uint *)0x0) {
      return;
    }
    uVar2 = *puVar6;
    if (uVar2 == 0 || puVar6 == (uint *)(ulong)uVar2) {
      return;
    }
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
    if (*puVar7 == 0) {
      return;
    }
    uVar2 = puVar7[1];
    if (uVar2 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar7[2] == 0) {
      return;
    }
    lVar5 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar5 == 0) {
      return;
    }
    uVar1 = 0;
    if ((ulong)uVar2 != 0) {
      uVar1 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar2);
    }
    if (*puVar7 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc0e98 <= uVar1) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar1 * 2) != 1) {
      return;
    }
  }
  FUN_01258c6c(*(undefined8 *)(param_1 + 0x1d0));
  if (*(long **)(param_1 + 0x1d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1d0) + 8))();
  }
LAB_0131e10c:
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  return;
}

