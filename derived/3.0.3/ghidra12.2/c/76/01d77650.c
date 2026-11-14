
undefined8 FUN_01d77650(long param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  long local_78;
  long local_70;
  undefined4 local_64;
  
  **(undefined1 **)(param_1 + 8) = 0;
  **(undefined1 **)(param_2 + 8) = 0;
  puVar9 = PTR_DAT_04bc2558;
  puVar8 = PTR_DAT_04bc11f0;
  lVar13 = *(long *)PTR_DAT_04bb4960;
  local_78 = param_1;
  local_70 = param_2;
  if (lVar13 == 0) {
LAB_01d778a0:
    uVar11 = 0;
    **(undefined1 **)(local_78 + 8) = 0;
    **(undefined1 **)(local_70 + 8) = 0;
  }
  else {
    if (0 < *(int *)(param_3 + 0x138)) {
      bVar6 = false;
      uVar17 = 0;
      do {
        piVar2 = (int *)(param_3 + 0xc0) + uVar17 * 3;
        if (9 < uVar17) {
          piVar2 = (int *)(param_3 + 0xc0);
        }
        if ((piVar2[2] & 0xffffU) < 0x15) {
          local_64 = FUN_006bd550(*(undefined8 *)
                                   (puVar9 + ((ulong)(uint)piVar2[2] & 0xffff) * 8 + 0x150),0);
          puVar10 = (uint *)FUN_036c67d0(lVar13 + 0x800,&local_64);
          if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
            cVar12 = *PTR_DAT_04bc11e8;
            do {
              puVar7 = PTR_DAT_04bc11e8;
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                uVar4 = *puVar10;
              }
              else {
                uVar4 = *(uint *)(puVar8 + 0x70);
                if (-1 < (int)uVar4) {
                  if ((char *)((ulong)uVar4 + (long)puVar10) != (char *)0x0) {
                    cVar12 = *(char *)((ulong)uVar4 + (long)puVar10);
                    if (cVar12 == '\x02') {
                      *(bool *)(local_70 + 0x38) = *piVar2 == 2;
                      *(int *)(local_70 + 0x3c) = piVar2[2];
                      uVar15 = FUN_01d79190(local_70,piVar2[1]);
                      if ((uVar15 & 1) == 0) goto LAB_01d778a0;
                    }
                    else if (cVar12 == '\x01') {
                      plVar5 = &local_70;
                      if (!bVar6) {
                        plVar5 = &local_78;
                      }
                      lVar3 = *plVar5;
                      *(bool *)(lVar3 + 0x38) = *piVar2 == 2;
                      *(int *)(lVar3 + 0x3c) = piVar2[2];
                      uVar15 = FUN_01d79190(lVar3,piVar2[1]);
                      if ((uVar15 & 1) == 0) goto LAB_01d778a0;
                      bVar6 = true;
                    }
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
                uVar4 = *puVar10;
              }
              if ((uVar4 == 0) || (puVar14 = (uint *)(ulong)uVar4, puVar10 == puVar14)) break;
              lVar3 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar10 + (lVar3 - (long)puVar14);
              if (lVar3 == 0) break;
              uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
              *(undefined4 *)(puVar8 + 0x70) = 0xfffffffe;
              if (uVar15 == 0) break;
              piVar16 = (int *)(lVar3 + 4);
              while (piVar16[-1] != -0x49e2b638) {
                piVar16 = piVar16 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_01d77700;
              }
              iVar1 = 0;
              if (*piVar16 != -1) {
                iVar1 = *piVar16;
              }
              *(int *)(puVar8 + 0x70) = iVar1;
              if (*puVar10 == 0) break;
            } while( true );
          }
        }
LAB_01d77700:
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)*(int *)(param_3 + 0x138));
    }
    uVar11 = 1;
  }
  return uVar11;
}

