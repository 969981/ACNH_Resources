
uint FUN_039b04f0(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined *local_70;
  long local_68;
  
  if (param_2 < 6) {
    switch(param_2) {
    case 0:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x78);
          if (*(ushort *)(lVar13 + 0x78) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x48) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b0670:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x78);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b0670;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b0670;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b0670;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x78);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
      break;
    case 1:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x7a);
          if (*(ushort *)(lVar13 + 0x7a) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x50) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b07c0:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000 | 1;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x7a);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b07c0;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b07c0;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b07c0;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x7a);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
      break;
    case 2:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x7c);
          if (*(ushort *)(lVar13 + 0x7c) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x58) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b0900:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000 | 2;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x7c);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b0900;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b0900;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b0900;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x7c);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
      break;
    case 3:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x7e);
          if (*(ushort *)(lVar13 + 0x7e) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x60) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b0a40:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000 | 3;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x7e);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b0a40;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b0a40;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b0a40;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x7e);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x80);
          if (*(ushort *)(lVar13 + 0x80) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x68) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b0b80:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000 | 4;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x80);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b0b80;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b0b80;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b0b80;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x80);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
      break;
    case 5:
      if (*(int *)(param_1 + 200) != 0) {
        plVar11 = *(long **)(param_1 + 0xd0);
        iVar10 = 0;
        plVar2 = plVar11 + *(int *)(param_1 + 200);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar13 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x82);
          if (*(ushort *)(lVar13 + 0x82) != 0) {
            uVar9 = 0;
            do {
              local_68 = *(long *)(*(long *)(lVar13 + 0x70) + uVar9 * 0x18 + 0x10);
              local_70 = puVar1;
              (**(code **)(*param_3 + 0x18))(param_3);
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar12 = param_3[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar12 == local_68) {
LAB_039b0cc0:
                if (-1 < (int)uVar9) {
                  uVar8 = (iVar10 + (int)uVar9) * 0x10000 | 5;
                  goto LAB_039b0cd0;
                }
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x82);
                break;
              }
              uVar7 = 0;
              bVar5 = true;
              do {
                lVar12 = param_3[1] + 1 + uVar7;
                lVar3 = local_68 + 1 + uVar7;
                cVar4 = *(char *)(lVar12 + -1);
                if (cVar4 != *(char *)(lVar3 + -1)) break;
                if (cVar4 == '\0') {
                  if (bVar5) goto LAB_039b0cc0;
                  break;
                }
                cVar4 = *(char *)(param_3[1] + 1 + uVar7);
                if (cVar4 != *(char *)(local_68 + 1 + uVar7)) break;
                if (cVar4 == '\0') goto LAB_039b0cc0;
                cVar4 = *(char *)(lVar12 + 1);
                if (cVar4 != *(char *)(lVar3 + 1)) break;
                if (cVar4 == '\0') goto LAB_039b0cc0;
                bVar5 = uVar7 < 0x7fffe;
                uVar7 = uVar7 + 3;
              } while (uVar7 != 0x80001);
              uVar7 = (ulong)*(ushort *)(lVar13 + 0x82);
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          plVar11 = plVar11 + 1;
          iVar10 = iVar10 + (int)uVar7;
        } while (plVar11 != plVar2);
      }
    }
    uVar8 = 0xffffffff;
LAB_039b0cd0:
    uVar6 = uVar8 & 0xffff0000;
  }
  else {
    uVar8 = 0xffff;
    uVar6 = 0xffff0000;
  }
  return uVar8 & 0xffff | uVar6;
}

