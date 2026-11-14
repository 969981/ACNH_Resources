
uint FUN_01678100(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *__s;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  char cVar17;
  uint *puVar18;
  float fVar19;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  
  uVar11 = FUN_01ae59b0();
  __s = PTR_DAT_04bbfe90;
  puVar7 = PTR_DAT_04bbfe88;
  if ((uVar11 & 1) != 0) {
    puVar18 = *(uint **)(param_1 + 0x10);
    fVar19 = 0.0;
    if ((puVar18 != (uint *)0x0) && (uVar5 = *puVar18, uVar5 != 0)) {
      cVar17 = *PTR_DAT_04bbfe88;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *puVar7 = 1;
          memset(__s,0xff,0x1ac);
          uVar5 = *puVar18;
        }
        else {
          uVar13 = *(uint *)(__s + 0x28);
          if (-1 < (int)uVar13) {
            if ((float *)((ulong)uVar13 + (long)puVar18) != (float *)0x0) {
              fVar19 = *(float *)((ulong)uVar13 + (long)puVar18);
            }
            break;
          }
          if (uVar13 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)uVar5;
        if ((puVar6 == (uint *)0x0) || (puVar18 == puVar6)) break;
        lVar15 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar18 + (lVar15 - (long)puVar6);
        if (lVar15 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
        *(undefined4 *)(__s + 0x28) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar15 + 4);
        while (piVar14[-1] != -0x3e783aea) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_01678234;
        }
        iVar3 = 0;
        if (*piVar14 != -1) {
          iVar3 = *piVar14;
        }
        *(int *)(__s + 0x28) = iVar3;
        uVar5 = *puVar18;
        if (uVar5 == 0) break;
      } while( true );
    }
LAB_01678234:
    local_88 = 0;
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_90 = PTR_DAT_04bb2010 + 0x10;
    local_78 = 0;
    local_80 = puStack_90;
    FUN_01afb480(param_1,&local_98);
    iVar10 = DAT_05233984;
    iVar9 = DAT_05233980;
    iVar8 = DAT_05233974;
    iVar3 = DAT_05233970;
    if (8.0 <= fVar19) {
      iVar4 = *(int *)(param_2 + 8);
      uVar5 = iVar4 + (int)local_88;
      uVar13 = *(int *)(param_2 + 0xc) + local_88._4_4_;
      if (12.0 <= fVar19) {
        if (16.0 <= fVar19) {
          if (20.0 <= fVar19) {
            lVar15 = 0x3018;
          }
          else {
            lVar15 = 0x2010;
          }
        }
        else {
          lVar15 = 0x1008;
        }
        param_3 = param_3 + lVar15;
      }
      uVar1 = uVar13 + 1;
      uVar16 = uVar5;
      do {
        if ((((iVar3 <= (int)uVar16) && ((int)uVar16 <= iVar9)) && (iVar8 <= (int)uVar13)) &&
           (((int)uVar13 <= iVar10 &&
            (uVar2 = (uVar13 & 0x1fffffe) * 0x80 + ((int)uVar16 >> 1), uVar2 >> 0xf == 0)))) {
          lVar15 = (ulong)(uVar2 >> 5) * 4;
          *(uint *)(param_3 + 8 + lVar15) =
               *(uint *)(param_3 + 8 + lVar15) | 1 << (ulong)(uVar16 >> 1 & 0x1f);
        }
        if ((int)uVar16 < iVar4 + (int)local_78) {
          uVar16 = uVar16 + 1;
        }
        else {
          uVar13 = uVar13 + 1;
          uVar16 = uVar5;
        }
      } while ((uVar5 != uVar16) || (uVar1 != uVar13));
    }
  }
  return uVar11 & 1;
}

