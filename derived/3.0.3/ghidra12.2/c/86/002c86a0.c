
void FUN_002c86a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  int local_13c;
  undefined8 local_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_64;
  
  lVar1 = param_1 + 0x50;
  iVar8 = FUN_002b43fc();
  if (iVar8 != 0) {
    lVar13 = *(long *)(param_1 + 400);
    lVar2 = param_1 + 0x188;
    if (lVar13 != lVar2) {
      lVar3 = param_1 + 0x270;
      do {
        while( true ) {
          lVar4 = lVar13 + 0x10;
          local_70 = 0;
          FUN_002282f0(&local_70);
          if ((local_70 <= *(ulong *)(lVar13 + 0xa0)) ||
             ((*(int *)(lVar13 + 0xac) != -1 && (*(char *)(lVar13 + 0xa9) == '\0')))) break;
          local_108 = 0;
          local_110 = 0x80000;
          (**(code **)(*(long *)(lVar13 + 0x10) + 0x10))(lVar4,&local_110);
          FUN_002c60e0(lVar3,lVar13 + 0x18);
          lVar16 = *(long *)(lVar13 + 8);
          (*(code *)**(undefined8 **)(lVar13 + 0x10))(lVar4);
          FUN_00223704(lVar2,lVar13);
          FUN_002236e0(param_1 + 0x1a0,param_1 + 0x1a0,lVar13 + *(int *)(param_1 + 0x1b4));
          lVar13 = lVar16;
joined_r0x002c875c:
          if (lVar13 == lVar2) {
            return;
          }
        }
        local_78 = 0;
        FUN_002282f0(&local_78);
        uVar10 = FUN_002cb110(lVar4,&local_78);
        if ((uVar10 & 1) == 0) {
LAB_002c8754:
          lVar13 = *(long *)(lVar13 + 8);
          goto joined_r0x002c875c;
        }
        uVar6 = *(uint *)(lVar13 + 0xb4);
        if (uVar6 == 0) {
          if (((*(char *)(param_1 + 0x17c8) != '\0') &&
              (iVar8 = FUN_002b43fc(lVar13 + 0x18), iVar8 != *(int *)(param_1 + 0x17d0))) &&
             (*(long *)(lVar13 + 0x98) == 0)) goto LAB_002c8754;
          lVar16 = *(long *)(param_1 + 0x1e0);
          if (lVar16 != param_1 + 0x1d8) {
            do {
              iVar8 = FUN_002b43fc(lVar13 + 0x18);
              iVar9 = FUN_002b43fc(lVar16 + 0x18);
              if (iVar8 == iVar9) goto LAB_002c8754;
              lVar16 = *(long *)(lVar16 + 8);
            } while (lVar16 != param_1 + 0x1d8);
          }
          uVar6 = *(uint *)(lVar13 + 0xb4);
        }
        if ((uVar6 < 0xb) && (*(long *)(lVar13 + 0x98) == 0)) {
          lVar16 = lVar13 + 0x18;
          uVar10 = FUN_002b44c4(lVar16);
          if (((uVar10 & 1) == 0) || (uVar10 = FUN_002b44d4(lVar16), (uVar10 & 1) != 0))
          goto LAB_002c88d0;
          uVar10 = FUN_002b4470(lVar16,lVar1);
          bVar7 = (uVar10 & 1) == 0;
          local_13c = 2;
          if (bVar7) {
            local_13c = 3;
          }
          uVar12 = 0;
          if (bVar7) {
            uVar12 = 4;
          }
          iVar8 = FUN_002b43fc(4,lVar13 + 0x18);
          lVar16 = *(long *)(param_1 + 0x230);
        }
        else {
LAB_002c88d0:
          uVar12 = 0;
          local_13c = 2;
          iVar8 = FUN_002b43fc(lVar13 + 0x18);
          lVar16 = *(long *)(param_1 + 0x230);
        }
        if (lVar16 != param_1 + 0x228) {
          lVar17 = lVar13 + 0x18;
          do {
            lVar5 = lVar16 + 0x18;
            iVar9 = FUN_002b43fc(lVar5);
            if (iVar9 == iVar8) {
              piVar15 = *(int **)(lVar16 + 0xa8);
              if ((piVar15 != (int *)0x0) && (2 < *piVar15 - 2U)) {
                if (*piVar15 == 1) {
                  if (*(int *)(lVar13 + 0xac) == -1) {
LAB_002c89b0:
                    uVar10 = FUN_002b44d4(lVar17);
                  }
                  else {
                    local_110 = local_110 & 0xffffffff00000000;
                    local_64 = 0;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((long)&local_110 + 4),(Result *)&local_64);
                    FUN_002296c4(auStack_120,&local_110);
                    FUN_00220f8c(piVar15,auStack_120);
                    uVar10 = FUN_002b44d4(lVar17);
                  }
                }
                else {
                  FUN_00220f78(piVar15);
                  lVar11 = FUN_002c5fd0(lVar3,lVar5);
                  if (lVar11 != 0) {
                    FUN_002282f0(lVar11 + 0x80);
                    goto LAB_002c89b0;
                  }
                  FUN_002b3fa8(&local_110);
                  local_90 = 0;
                  uStack_88 = 0;
                  FUN_002b415c(&local_110,lVar5);
                  FUN_002282f0(&local_90);
                  FUN_002282f0(&uStack_88);
                  local_80 = 0;
                  local_7c = 0;
                  FUN_002c5edc(lVar3,&local_110);
                  FUN_002b4104(&local_110);
                  uVar10 = FUN_002b44d4(lVar17);
                }
                if ((uVar10 & 1) == 0) {
                  FUN_002b4368(lVar17);
                  uVar10 = FUN_00220038();
                  if ((uVar10 & 1) != 0) {
                    uVar14 = *(undefined8 *)(lVar16 + 0xa8);
                    local_110 = CONCAT44(local_110._4_4_,0x4c11);
                    local_64 = 0;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((long)&local_110 + 4),(Result *)&local_64);
                    FUN_002296c4(auStack_130,&local_110);
                    FUN_00220ff8(uVar14,auStack_130);
                    goto LAB_002c8754;
                  }
                }
              }
              break;
            }
            lVar16 = *(long *)(lVar16 + 8);
          } while (lVar16 != param_1 + 0x228);
        }
        lVar16 = lVar13 + 0x18;
        if ((*(long *)(lVar13 + 0x98) == 0) &&
           ((((uVar10 = FUN_002b440c(lVar1), (uVar10 & 1) == 0 ||
              (uVar10 = FUN_002b440c(lVar16), (uVar10 & 1) == 0)) ||
             (uVar10 = FUN_002b44c4(lVar16), (uVar10 & 1) == 0)) &&
            (uVar10 = FUN_002b4420(lVar16), (uVar10 & 1) == 0)))) {
          FUN_002cb148(lVar4);
        }
        FUN_002b4018(&local_110,lVar16);
        local_138 = 0;
        FUN_002282f0(&local_138);
        FUN_002c8b8c(param_1,0,&local_110,&local_138,uVar12);
        local_138 = 0;
        FUN_002282f0(&local_138);
        FUN_002c8b8c(param_1,0,&local_110,&local_138,uVar12);
        if (local_13c != 2) {
          local_138 = 0;
          FUN_002282f0(&local_138);
          FUN_002c8b8c(param_1,0,&local_110,&local_138,uVar12);
        }
        FUN_002b4104(&local_110);
        *(int *)(lVar13 + 0xb4) = *(int *)(lVar13 + 0xb4) + 1;
        uVar10 = FUN_002b440c(lVar1);
        if (((uVar10 & 1) == 0) || (*(uint *)(lVar13 + 0xb4) < *(uint *)(lVar13 + 0xb8)))
        goto LAB_002c8754;
        *(char *)(param_1 + 0x17c8) = '\x01';
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != lVar2);
    }
  }
  return;
}

