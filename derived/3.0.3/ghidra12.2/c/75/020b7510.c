
int FUN_020b7510(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  undefined *puVar18;
  float fVar19;
  float fVar20;
  uint local_9c;
  undefined8 local_88;
  char *pcStack_80;
  uint local_74;
  
  lVar9 = FUN_0265c2a0(param_2);
  if (lVar9 == 0) {
    local_74 = 0;
  }
  else {
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar10)();
      uVar4 = uVar4 ^ 1;
    }
    local_74 = FUN_020fd7d8(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  local_74 = local_74 & 0xff;
  if ((DAT_05574040 == 0) || (lVar9 = FUN_026eec4c(DAT_05574040,*param_1), lVar9 == 0)) {
    iVar15 = -1;
  }
  else {
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
      local_9c = 0;
    }
    else {
      local_9c = (**(code **)*puVar10)();
    }
    lVar2 = *(long *)(lVar9 + 8);
    lVar3 = *(long *)(lVar9 + 0x10);
    fVar19 = -3.4028235e+38;
    bVar16 = false;
    iVar17 = 0;
    iVar15 = -1;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar18 = PTR_DAT_04bb2020;
    do {
      lVar11 = FUN_0265e130(iVar17,lVar3 + lVar2 + 0xc138);
      if (lVar11 != 0) {
        if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar10 == (undefined8 *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)*puVar10)();
          uVar12 = uVar12 & 0xffffffff;
        }
        if (param_2 != iVar17) {
          lVar13 = FUN_0265c2a0(iVar17);
          if (lVar13 != 0) {
            pcStack_80 = "HasAcquaintanceship";
            local_88 = puVar1;
            iVar5 = FUN_02746e10(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),&local_88);
            if (iVar5 != 0) {
              local_88 = puVar18 + 0x10;
              pcStack_80 = "Friendship";
              uVar6 = FUN_02746e10(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),&local_88);
              uVar4 = local_74;
              if (param_2 == -1) {
LAB_020b77b8:
                if (uVar6 < 0x1e) goto LAB_020b77c0;
                if (uVar6 < 0x3c) {
                  uVar4 = 2;
                }
                else if (uVar6 < 100) {
                  uVar4 = 3;
                }
                else if (uVar6 < 0x96) {
                  uVar4 = 4;
                }
                else {
                  uVar4 = 5;
                  if (199 < uVar6) {
                    uVar4 = 6;
                  }
                }
              }
              else {
                lVar13 = FUN_0265c2a0(iVar17);
                if (lVar13 == 0) {
                  uVar8 = 0;
                }
                else {
                  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
                     (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28),
                     puVar10 == (undefined8 *)0x0)) {
                    uVar7 = 1;
                  }
                  else {
                    uVar7 = (**(code **)*puVar10)();
                    uVar7 = uVar7 ^ 1;
                  }
                  uVar8 = FUN_020fd7d8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
                  if ((((uVar7 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
                     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8),
                     puVar10 != (undefined8 *)0x0)) {
                    (**(code **)*puVar10)();
                  }
                }
                local_88 = (undefined *)(CONCAT44(local_88._4_4_,uVar8) & 0xffffffff000000ff);
                puVar18 = PTR_DAT_04bb2020;
                if (uVar4 != (uint)local_88) goto LAB_020b77b8;
LAB_020b77c0:
                uVar4 = 1;
              }
              local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar4);
              if (bVar16) {
                bVar16 = true;
                fVar20 = fVar19;
                if (uVar4 < 3) goto LAB_020b7884;
              }
              else {
                bVar16 = 2 < uVar4;
                fVar20 = -3.4028235e+38;
                if (uVar4 < 3) {
                  fVar20 = fVar19;
                }
              }
              puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
              uVar4 = *puVar14 ^ *puVar14 << 0xb;
              uVar6 = puVar14[3];
              *puVar14 = puVar14[1];
              puVar14[1] = puVar14[2];
              uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
              puVar14[2] = uVar6;
              puVar14[3] = uVar4;
              fVar19 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
              iVar5 = iVar17;
              if (fVar19 <= fVar20) {
                iVar5 = iVar15;
                fVar19 = fVar20;
              }
              iVar15 = iVar5;
            }
          }
        }
LAB_020b7884:
        if ((((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 10);
    if ((((local_9c & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  return iVar15;
}

