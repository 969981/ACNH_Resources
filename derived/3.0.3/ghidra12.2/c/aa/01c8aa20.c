
/* WARNING: Removing unreachable block (ram,0x01c8aad0) */

void FUN_01c8aa20(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
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
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc1448);
    }
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar5 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc1440);
      if ((uVar5 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
    }
    local_78 = CONCAT44(local_78._4_4_,7);
    plVar11 = (long *)puVar10[8];
    pbVar1 = (byte *)((undefined8 *)(lVar9 + 0x18) + (ulong)*(byte *)(lVar9 + 0x225) * 4 + 2);
    if (7 < *(byte *)(lVar9 + 0x225)) {
      pbVar1 = PTR_DAT_04bb5018;
    }
    bVar2 = *pbVar1;
    puVar6 = (uint *)(**(code **)(*plVar11 + 0x100))(plVar11);
    puVar3 = PTR_DAT_04bcb7d8;
    uVar12 = 0;
    do {
      uVar8 = uVar12 & 0xff;
      if (bVar2 != uVar8) {
        local_64[0] = (undefined1)uVar12;
        uVar5 = FUN_01c94e4c(lVar9,local_64);
        if ((uVar5 & 1) != 0) {
          puVar10 = &DAT_053565d0;
          if ((((((uVar8 != 0xff) &&
                 ((*(byte *)(lVar9 + 0x28) != uVar8 ||
                  (puVar10 = (undefined8 *)(lVar9 + 0x18), *(char *)(lVar9 + 0x20) != '\0')))) &&
                ((*(byte *)(lVar9 + 0x48) != uVar8 ||
                 (puVar10 = (undefined8 *)(lVar9 + 0x38), *(char *)(lVar9 + 0x40) != '\0')))) &&
               ((((*(byte *)(lVar9 + 0x68) != uVar8 ||
                  (puVar10 = (undefined8 *)(lVar9 + 0x58), *(char *)(lVar9 + 0x60) != '\0')) &&
                 ((*(byte *)(lVar9 + 0x88) != uVar8 ||
                  (puVar10 = (undefined8 *)(lVar9 + 0x78), *(char *)(lVar9 + 0x80) != '\0')))) &&
                ((*(byte *)(lVar9 + 0xa8) != uVar8 ||
                 (puVar10 = (undefined8 *)(lVar9 + 0x98), *(char *)(lVar9 + 0xa0) != '\0')))))) &&
              ((*(byte *)(lVar9 + 200) != uVar8 ||
               (puVar10 = (undefined8 *)(lVar9 + 0xb8), *(char *)(lVar9 + 0xc0) != '\0')))) &&
             (((*(byte *)(lVar9 + 0xe8) != uVar8 ||
               (puVar10 = (undefined8 *)(lVar9 + 0xd8), *(char *)(lVar9 + 0xe0) != '\0')) &&
              (puVar10 = (undefined8 *)(lVar9 + 0xf8),
              *(char *)(lVar9 + 0x100) != '\0' || *(byte *)(lVar9 + 0x108) != uVar8)))) {
            puVar10 = &DAT_053565d0;
          }
          uStack_70 = (ulong)*(byte *)(puVar10 + 1);
          local_78 = *puVar10;
          uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x68) + 0x100))
                            (*(long **)(*(long *)puVar3 + 0x68),&local_78);
          if ((uVar5 & 1) != 0) {
            local_78 = *puVar10;
            uStack_70 = (ulong)*(byte *)(puVar10 + 1);
            puVar7 = (uint *)(**(code **)(*plVar11 + 0x120))(plVar11,&local_78);
            uVar8 = *puVar7;
            if (uVar8 != 0) {
              if (*puVar6 == 0) {
                if (uVar8 <= puVar6[1] - 1) goto LAB_01c8ab54;
              }
              else if (uVar8 < *puVar6) {
                *puVar6 = 0;
                uVar8 = *puVar7;
LAB_01c8ab54:
                puVar6[1] = uVar8;
                (**(code **)(*plVar11 + 0x38))(plVar11,1);
              }
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 8);
  }
  return;
}

