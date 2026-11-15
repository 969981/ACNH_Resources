
void FUN_02209f40(long param_1,undefined4 *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 local_40;
  char *pcStack_38;
  
  *param_2 = 0xffffffff;
  **(undefined1 **)(param_1 + 8) = 0;
  local_40 = PTR_DAT_04bb2020;
  *param_3 = 0xffffffff;
  local_40 = local_40 + 0x10;
  pcStack_38 = "MuseumCafeAmiiboCustomer";
  uVar6 = FUN_0273ea30(&local_40);
  if ((uVar6 & 0xffff) == 0) {
    return;
  }
  if (0x22 < (uVar6 & 0xffff) >> 8) {
    uVar6 = uVar6 + 0xdd00 & 0xffff;
    *param_3 = uVar6;
    puVar5 = PTR_DAT_04bb40a8;
    puVar4 = PTR_DAT_04bb40a0;
    lVar14 = *(long *)PTR_DAT_04bb4130;
    uVar2 = *(uint *)(lVar14 + 0x1c0);
    uVar15 = uVar2;
    if ((int)uVar2 < 1) {
      if (*(long *)(lVar14 + 0xb0) == 0) {
        return;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8);
      if (puVar16 == (uint *)0x0) {
        return;
      }
      uVar15 = *puVar16;
      if (uVar15 == 0) {
        return;
      }
    }
    uVar17 = 0;
    cVar13 = *PTR_DAT_04bb40a0;
    do {
      if ((int)uVar2 < 1) {
        if ((((*(long *)(lVar14 + 0xb0) != 0) &&
             (puVar16 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
            ((*(uint *)(lVar14 + 200) <= uVar17 ||
             (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar17) != '\0')))) &&
           (((uVar17 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
          iVar7 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar7 = 0x1c;
          }
          puVar16 = (uint *)((ulong)(puVar16[1] * uVar17 + (uint)(ushort)puVar16[2] * 8 + iVar7) +
                            (long)puVar16);
          goto joined_r0x0220a2b0;
        }
      }
      else if (uVar17 < uVar2) {
        uVar9 = uVar17;
        if (*(uint *)(lVar14 + 0x1b0) <= uVar17) {
          uVar9 = 0;
        }
        puVar16 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x0220a2b0:
        if (puVar16 != (uint *)0x0) {
          uVar9 = 0;
          if (*puVar16 != 0) {
            do {
              if (cVar13 != '\0') {
                uVar3 = *(uint *)(puVar5 + 0x40);
                if ((int)uVar3 < 0) {
                  if (uVar3 == 0xffffffff) {
                    uVar3 = *puVar16;
                    if (uVar3 != 0) goto LAB_0220a1d8;
                    uVar9 = 0;
                  }
                  else {
LAB_0220a13c:
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = 0;
                  if ((ushort *)((ulong)uVar3 + (long)puVar16) != (ushort *)0x0) {
                    uVar9 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar16);
                  }
                }
                goto LAB_0220a140;
              }
              cVar13 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              uVar3 = *puVar16;
              uVar9 = 0;
              if (uVar3 == 0) goto LAB_0220a140;
LAB_0220a1d8:
              puVar10 = (uint *)(ulong)uVar3;
              if (puVar16 == puVar10) goto LAB_0220a13c;
              lVar1 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar16 + (lVar1 - (long)puVar10);
              if (lVar1 == 0) goto LAB_0220a13c;
              uVar18 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
              *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
              uVar9 = 0;
              if (uVar18 == 0) goto LAB_0220a140;
              piVar11 = (int *)(lVar1 + 4);
              while (piVar11[-1] != 0x54706054) {
                piVar11 = piVar11 + 2;
                uVar18 = uVar18 - 1;
                if (uVar18 == 0) {
                  uVar9 = 0;
                  goto LAB_0220a140;
                }
              }
              iVar7 = 0;
              if (*piVar11 != -1) {
                iVar7 = *piVar11;
              }
              *(int *)(puVar5 + 0x40) = iVar7;
            } while (*puVar16 != 0);
            uVar9 = 0;
          }
LAB_0220a140:
          if (uVar9 == uVar6) {
            uVar6 = *puVar16;
            goto joined_r0x0220a308;
          }
        }
      }
      uVar17 = uVar17 + 1;
      if (uVar17 == uVar15) {
        return;
      }
    } while( true );
  }
  uVar2 = uVar6 - 1 >> 8 & 0xff;
  local_40 = (undefined *)CONCAT53(local_40._3_5_,0x80023);
  if (uVar2 < 0x23) {
    FUN_020fd218(&local_40,uVar2,uVar6 - 1 & 0xff);
    uVar18 = (ulong)local_40 & 0xff;
    FUN_038d1270(param_1,"-----");
    if (uVar18 < 0x23) {
      FUN_038d1270(param_1,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar18 * 8 + 0xb0),
                   local_40._1_1_);
    }
  }
  else {
    FUN_038d1270(param_1,"-----");
  }
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
LAB_0220a120:
    uVar8 = 0xffffffff;
  }
  else {
    puVar12 = *(undefined8 **)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
      lVar14 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar14 == 0) goto LAB_0220a120;
      lVar14 = lVar14 + 0x70;
    }
    else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
            (lVar14 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar14 == 0))
    goto LAB_0220a120;
    if ((*(long **)(lVar14 + 0xd0) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar14 + 0xd0), puVar12 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar12)();
      uVar6 = uVar6 ^ 1;
    }
    uVar8 = FUN_027dc31c(*(long *)(lVar14 + 0xb8) + *(long *)(lVar14 + 0xb0),&local_40);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0xd0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  *param_2 = uVar8;
  return;
joined_r0x0220a308:
  if (uVar6 == 0) {
LAB_0220a3d4:
    lVar14 = 0;
LAB_0220a3d8:
    lVar1 = *(long *)PTR_PTR_04bc0550;
    if (lVar14 != 0) {
      lVar1 = lVar14;
    }
    FUN_038d1270(param_1,&DAT_0409e973,lVar1);
    return;
  }
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
  }
  else {
    uVar6 = *(uint *)(puVar5 + 0x50);
    if (-1 < (int)uVar6) {
      lVar14 = (ulong)uVar6 + (long)puVar16;
      goto LAB_0220a3d8;
    }
    if (uVar6 != 0xffffffff) goto LAB_0220a3d4;
  }
  puVar10 = (uint *)(ulong)*puVar16;
  lVar14 = 0;
  if ((*puVar16 == 0) || (puVar16 == puVar10)) goto LAB_0220a3d8;
  lVar14 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
    lVar14 = 0x1c;
  }
  lVar1 = (long)puVar16 + (lVar14 - (long)puVar10);
  if (lVar1 == 0) goto LAB_0220a3d4;
  uVar18 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
  *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
  lVar14 = 0;
  if (uVar18 == 0) goto LAB_0220a3d8;
  piVar11 = (int *)(lVar1 + 4);
  while (piVar11[-1] != 0x2f1b930d) {
    piVar11 = piVar11 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) {
      lVar14 = 0;
      goto LAB_0220a3d8;
    }
  }
  iVar7 = 0;
  if (*piVar11 != -1) {
    iVar7 = *piVar11;
  }
  *(int *)(puVar5 + 0x50) = iVar7;
  uVar6 = *puVar16;
  goto joined_r0x0220a308;
}

