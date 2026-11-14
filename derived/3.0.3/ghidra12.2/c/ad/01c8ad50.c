
/* WARNING: Removing unreachable block (ram,0x01c8ae04) */

void FUN_01c8ad50(int *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_64 [4];
  
  if ((**(char **)(*(long *)PTR_DAT_04bb21d0 + 0x2070) != '\0') &&
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88), *(byte *)(lVar9 + 0x225) < 8)) {
    puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb21d8 + 0x3d0);
    if (((*PTR_DAT_04bc1448 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc1448);
    }
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc1440);
      if ((uVar6 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
    }
    local_78 = CONCAT44(local_78._4_4_,7);
    plVar11 = (long *)puVar10[8];
    pbVar2 = (byte *)((undefined8 *)(lVar9 + 0x18) + (ulong)*(byte *)(lVar9 + 0x225) * 4 + 2);
    if (7 < *(byte *)(lVar9 + 0x225)) {
      pbVar2 = PTR_DAT_04bb5018;
    }
    bVar3 = *pbVar2;
    piVar7 = (int *)(**(code **)(*plVar11 + 0x100))(plVar11);
    puVar4 = PTR_DAT_04bcb7d8;
    if (piVar7[1] != 0) {
      uVar12 = 0;
      do {
        uVar1 = uVar12 & 0xff;
        if (bVar3 != uVar1) {
          local_64[0] = (undefined1)uVar12;
          uVar6 = FUN_01c94e4c(lVar9,local_64);
          if ((uVar6 & 1) != 0) {
            puVar10 = &DAT_053565d0;
            if ((((((uVar1 != 0xff) &&
                   ((*(byte *)(lVar9 + 0x28) != uVar1 ||
                    (puVar10 = (undefined8 *)(lVar9 + 0x18), *(char *)(lVar9 + 0x20) != '\0')))) &&
                  ((*(byte *)(lVar9 + 0x48) != uVar1 ||
                   (puVar10 = (undefined8 *)(lVar9 + 0x38), *(char *)(lVar9 + 0x40) != '\0')))) &&
                 ((((*(byte *)(lVar9 + 0x68) != uVar1 ||
                    (puVar10 = (undefined8 *)(lVar9 + 0x58), *(char *)(lVar9 + 0x60) != '\0')) &&
                   ((*(byte *)(lVar9 + 0x88) != uVar1 ||
                    (puVar10 = (undefined8 *)(lVar9 + 0x78), *(char *)(lVar9 + 0x80) != '\0')))) &&
                  ((*(byte *)(lVar9 + 0xa8) != uVar1 ||
                   (puVar10 = (undefined8 *)(lVar9 + 0x98), *(char *)(lVar9 + 0xa0) != '\0')))))) &&
                ((*(byte *)(lVar9 + 200) != uVar1 ||
                 (puVar10 = (undefined8 *)(lVar9 + 0xb8), *(char *)(lVar9 + 0xc0) != '\0')))) &&
               (((*(byte *)(lVar9 + 0xe8) != uVar1 ||
                 (puVar10 = (undefined8 *)(lVar9 + 0xd8), *(char *)(lVar9 + 0xe0) != '\0')) &&
                (puVar10 = (undefined8 *)(lVar9 + 0xf8),
                *(char *)(lVar9 + 0x100) != '\0' || *(byte *)(lVar9 + 0x108) != uVar1)))) {
              puVar10 = &DAT_053565d0;
            }
            uStack_70 = (ulong)*(byte *)(puVar10 + 1);
            local_78 = *puVar10;
            uVar6 = (**(code **)(**(long **)(*(long *)puVar4 + 0x68) + 0x100))
                              (*(long **)(*(long *)puVar4 + 0x68),&local_78);
            if ((uVar6 & 1) != 0) {
              local_78 = *puVar10;
              uStack_70 = (ulong)*(byte *)(puVar10 + 1);
              piVar8 = (int *)(**(code **)(*plVar11 + 0x120))(plVar11,&local_78);
              if (*piVar8 == piVar7[1]) goto LAB_01c8b008;
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 8);
      piVar7[1] = 0;
      (**(code **)(*plVar11 + 0x38))(plVar11,1);
    }
LAB_01c8b008:
    if ((*piVar7 != 0) && (*param_1 == 0)) {
      *piVar7 = 0;
      (**(code **)(*plVar11 + 0x38))(plVar11,1);
    }
    if (((piVar7[1] == 0) && (*piVar7 == 0)) && (*param_1 != 0)) {
      *piVar7 = *param_1;
      (**(code **)(*plVar11 + 0x38))(plVar11,1);
    }
  }
  return;
}

