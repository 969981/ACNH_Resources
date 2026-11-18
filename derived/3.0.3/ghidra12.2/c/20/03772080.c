
uint FUN_03772080(void)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  uint in_w18;
  uint extraout_w18;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar5 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
      in_w18 = extraout_w18;
    }
  }
  puVar3 = PTR_DAT_04bc3a48;
  iVar5 = *(int *)(puVar11 + 7);
  if ((iVar5 == -0x7975b8e8 || iVar5 == -0x17df00c3) || iVar5 == -0x3e092032) {
    lVar8 = *(long *)PTR_DAT_04bb27f8;
    if (lVar8 != 0) {
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
          ((*(byte *)(lVar8 + 0x1a71) >> 2 & 1) == 0)) ||
         ((*(long *)PTR_DAT_04bc1530 == 0 ||
          (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 == 0)))) {
        iVar5 = *(int *)(lVar8 + 4);
      }
      else if ((*(long **)(lVar13 + 0x1790) == (long *)0x0) ||
              (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x1790), puVar11 == (undefined8 *)0x0))
      {
        iVar5 = (int)*(char *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 4);
      }
      else {
        uVar6 = (**(code **)*puVar11)();
        iVar5 = (int)*(char *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 4);
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar13 + 0x1790) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x1790) + 8), puVar11 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar11)();
        }
      }
      if (iVar5 == 3) {
        in_w18 = 1;
      }
      else {
        if ((((*(ushort **)puVar3 == (ushort *)0x0) || ((**(ushort **)puVar3 & 1) == 0)) &&
            ((*(byte *)(lVar8 + 0x1a71) >> 2 & 1) == 0)) ||
           ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar13 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar13 == 0)))) {
          uVar12 = (uint)*(ushort *)(lVar8 + 2);
        }
        else if ((*(long **)(lVar13 + 0x1790) == (long *)0x0) ||
                (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x1790), puVar11 == (undefined8 *)0x0)
                ) {
          uVar12 = (uint)*(ushort *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 2);
        }
        else {
          uVar6 = (**(code **)*puVar11)();
          uVar12 = (uint)*(ushort *)(*(long *)(lVar13 + 0x1778) + *(long *)(lVar13 + 6000) + 2);
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar13 + 0x1790) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x1790) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
        }
        puVar4 = PTR_DAT_04bcad00;
        puVar3 = PTR_DAT_04bcacf8;
        if (((uVar12 - DAT_05abc378 < DAT_05abc358) &&
            (puVar9 = *(uint **)(DAT_05abc360 + (long)(int)(uVar12 - DAT_05abc378) * 8),
            puVar9 != (uint *)0x0)) && (uVar12 = *puVar9, uVar12 != 0)) {
          cVar10 = *PTR_DAT_04bcacf8;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
              uVar12 = *puVar9;
            }
            else {
              uVar1 = *(uint *)(puVar4 + 0x58);
              if (-1 < (int)uVar1) {
                if ((char *)((ulong)uVar1 + (long)puVar9) == (char *)0x0) break;
                in_w18 = (uint)(*(char *)((ulong)uVar1 + (long)puVar9) != '\0');
                goto LAB_037723e0;
              }
              if (uVar1 != 0xffffffff) break;
            }
            puVar2 = (uint *)(ulong)uVar12;
            in_w18 = 0;
            if ((puVar2 == (uint *)0x0) || (in_w18 = 0, puVar9 == puVar2)) goto LAB_037723e0;
            lVar13 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar2)) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar9 + (lVar13 - (long)puVar2);
            in_w18 = 0;
            if (lVar13 == 0) goto LAB_037723e0;
            uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar2));
            *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar7 = (int *)(lVar13 + 4);
            while (piVar7[-1] != 0x9f88366) {
              piVar7 = piVar7 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_037723dc;
            }
            in_w18 = 0;
            iVar5 = 0;
            if (*piVar7 != -1) {
              iVar5 = *piVar7;
            }
            *(int *)(puVar4 + 0x58) = iVar5;
            uVar12 = *puVar9;
            if (uVar12 == 0) goto LAB_037723e0;
          } while( true );
        }
LAB_037723dc:
        in_w18 = 0;
      }
    }
LAB_037723e0:
    uVar12 = lVar8 != 0 & in_w18;
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}

