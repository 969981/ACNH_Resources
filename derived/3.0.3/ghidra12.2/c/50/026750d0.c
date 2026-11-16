
/* WARNING: Type propagation algorithm not settling */

int FUN_026750d0(long param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  
  if (param_1 == 0) {
    if (DAT_0559bc2c < 0x14) {
      return 0xff;
    }
    return -(uint)(DAT_0559bc2c - 0x14 < 0x14);
  }
  lVar13 = param_1 + 0x194b0;
  plVar15 = (long *)(param_1 + 0x194b8);
  if (*plVar15 == 0) {
    plVar12 = *(long **)(*(long *)(DAT_05574040 + 0x20) + 0x98);
    lVar16 = *(long *)(DAT_05574040 + 0x20);
  }
  else {
    plVar12 = *(long **)(param_1 + 0x19548);
    lVar16 = lVar13;
  }
  if (plVar12 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    }
  }
  uVar17 = 0;
  lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
  bVar3 = 0;
  if (*(byte *)(lVar2 + 0x178) < 3) {
    bVar3 = *(byte *)(lVar2 + 0x178);
  }
  uVar4 = 0x1e;
  if (bVar3 != 1) {
    uVar4 = 0x14;
  }
  uVar5 = 0x28;
  if (bVar3 != 2) {
    uVar5 = uVar4;
  }
  uVar8 = *(uint *)(lVar2 + 0x158);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  do {
    if (uVar17 < 0x28) {
      uVar14 = (int)uVar17 - uVar8;
      pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
      if (0x13 < uVar14) {
        pcVar6 = (char *)(lVar2 + 0xa4);
      }
      pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
      if (uVar8 <= uVar17) {
        pcVar7 = pcVar6;
      }
      if (*pcVar7 == '\0') goto joined_r0x026751e8;
    }
    uVar17 = uVar17 + 1;
  } while (uVar5 != uVar17);
  uVar17 = (ulong)DAT_0559bc2c;
joined_r0x026751e8:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (0x27 < (uint)uVar17) {
    return 0;
  }
  if (*plVar15 == 0) {
    plVar12 = *(long **)(*(long *)(DAT_05574040 + 0x20) + 0x98);
    lVar16 = *(long *)(DAT_05574040 + 0x20);
  }
  else {
    plVar12 = *(long **)(param_1 + 0x19548);
    lVar16 = lVar13;
  }
  if (plVar12 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    }
  }
  uVar17 = 0;
  lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
  bVar3 = 0;
  if (*(byte *)(lVar2 + 0x178) < 3) {
    bVar3 = *(byte *)(lVar2 + 0x178);
  }
  uVar4 = 0x1e;
  if (bVar3 != 1) {
    uVar4 = 0x14;
  }
  uVar5 = 0x28;
  if (bVar3 != 2) {
    uVar5 = uVar4;
  }
  uVar8 = *(uint *)(lVar2 + 0x158);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  do {
    if (uVar17 < 0x28) {
      uVar14 = (int)uVar17 - uVar8;
      pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
      if (0x13 < uVar14) {
        pcVar6 = (char *)(lVar2 + 0xa4);
      }
      pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
      if (uVar8 <= uVar17) {
        pcVar7 = pcVar6;
      }
      if (*pcVar7 == '\x01') goto joined_r0x02675310;
    }
    uVar17 = uVar17 + 1;
  } while (uVar5 != uVar17);
  uVar17 = (ulong)DAT_0559bc2c;
joined_r0x02675310:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (0x27 < (uint)uVar17) {
    return 1;
  }
  if (*plVar15 == 0) {
    plVar12 = *(long **)(*(long *)(DAT_05574040 + 0x20) + 0x98);
    lVar16 = *(long *)(DAT_05574040 + 0x20);
  }
  else {
    plVar12 = *(long **)(param_1 + 0x19548);
    lVar16 = lVar13;
  }
  if (plVar12 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    }
  }
  uVar17 = 0;
  lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
  bVar3 = 0;
  if (*(byte *)(lVar2 + 0x178) < 3) {
    bVar3 = *(byte *)(lVar2 + 0x178);
  }
  uVar4 = 0x1e;
  if (bVar3 != 1) {
    uVar4 = 0x14;
  }
  uVar5 = 0x28;
  if (bVar3 != 2) {
    uVar5 = uVar4;
  }
  uVar8 = *(uint *)(lVar2 + 0x158);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  do {
    if (uVar17 < 0x28) {
      uVar14 = (int)uVar17 - uVar8;
      pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
      if (0x13 < uVar14) {
        pcVar6 = (char *)(lVar2 + 0xa4);
      }
      pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
      if (uVar8 <= uVar17) {
        pcVar7 = pcVar6;
      }
      if (*pcVar7 == '\x02') goto joined_r0x0267542c;
    }
    uVar17 = uVar17 + 1;
  } while (uVar5 != uVar17);
  uVar17 = (ulong)DAT_0559bc2c;
joined_r0x0267542c:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((uint)uVar17 < 0x28) {
    lVar16 = lVar13;
    if (*plVar15 == 0) {
      lVar16 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar16 + 0x98) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar16 + 0x98);
      uVar9 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar10)();
      }
    }
    uVar17 = 0;
    lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
    bVar3 = 0;
    if (*(byte *)(lVar2 + 0x178) < 3) {
      bVar3 = *(byte *)(lVar2 + 0x178);
    }
    uVar4 = 0x1e;
    if (bVar3 != 1) {
      uVar4 = 0x14;
    }
    uVar5 = 0x28;
    if (bVar3 != 2) {
      uVar5 = uVar4;
    }
    uVar8 = *(uint *)(lVar2 + 0x158);
    if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    do {
      if (uVar17 < 0x28) {
        uVar14 = (int)uVar17 - uVar8;
        pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
        if (0x13 < uVar14) {
          pcVar6 = (char *)(lVar2 + 0xa4);
        }
        pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
        if (uVar8 <= uVar17) {
          pcVar7 = pcVar6;
        }
        if (*pcVar7 == '\x03') goto LAB_02675550;
      }
      uVar17 = uVar17 + 1;
    } while (uVar5 != uVar17);
    uVar17 = (ulong)DAT_0559bc2c;
LAB_02675550:
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if ((uint)uVar17 < 0x28) {
      lVar16 = lVar13;
      if (*plVar15 == 0) {
        lVar16 = *(long *)(DAT_05574040 + 0x20);
      }
      if (*(long **)(lVar16 + 0x98) == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar16 + 0x98);
        uVar9 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar10)();
        }
      }
      uVar17 = 0;
      lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
      bVar3 = 0;
      if (*(byte *)(lVar2 + 0x178) < 3) {
        bVar3 = *(byte *)(lVar2 + 0x178);
      }
      uVar4 = 0x1e;
      if (bVar3 != 1) {
        uVar4 = 0x14;
      }
      uVar5 = 0x28;
      if (bVar3 != 2) {
        uVar5 = uVar4;
      }
      uVar8 = *(uint *)(lVar2 + 0x158);
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      do {
        if (uVar17 < 0x28) {
          uVar14 = (int)uVar17 - uVar8;
          pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
          if (0x13 < uVar14) {
            pcVar6 = (char *)(lVar2 + 0xa4);
          }
          pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
          if (uVar8 <= uVar17) {
            pcVar7 = pcVar6;
          }
          if (*pcVar7 == '\x04') goto LAB_02675660;
        }
        uVar17 = uVar17 + 1;
      } while (uVar5 != uVar17);
      uVar17 = (ulong)DAT_0559bc2c;
LAB_02675660:
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      if ((uint)uVar17 < 0x28) {
        lVar16 = lVar13;
        if (*plVar15 == 0) {
          lVar16 = *(long *)(DAT_05574040 + 0x20);
        }
        if (*(long **)(lVar16 + 0x98) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          puVar10 = (undefined8 *)**(long **)(lVar16 + 0x98);
          uVar9 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar9 = (**(code **)*puVar10)();
          }
        }
        uVar17 = 0;
        lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
        bVar3 = 0;
        if (*(byte *)(lVar2 + 0x178) < 3) {
          bVar3 = *(byte *)(lVar2 + 0x178);
        }
        uVar4 = 0x1e;
        if (bVar3 != 1) {
          uVar4 = 0x14;
        }
        uVar5 = 0x28;
        if (bVar3 != 2) {
          uVar5 = uVar4;
        }
        uVar8 = *(uint *)(lVar2 + 0x158);
        if (0x13 < uVar8) {
          uVar8 = 0x14;
        }
        do {
          if (uVar17 < 0x28) {
            uVar14 = (int)uVar17 - uVar8;
            pcVar6 = (char *)(lVar2 + 0xa4) + uVar14;
            if (0x13 < uVar14) {
              pcVar6 = (char *)(lVar2 + 0xa4);
            }
            pcVar7 = (char *)(lVar2 + 0x15c + uVar17);
            if (uVar8 <= uVar17) {
              pcVar7 = pcVar6;
            }
            if (*pcVar7 == '\x05') goto LAB_02675770;
          }
          uVar17 = uVar17 + 1;
        } while (uVar5 != uVar17);
        uVar17 = (ulong)DAT_0559bc2c;
LAB_02675770:
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
        if ((uint)uVar17 < 0x28) {
          lVar16 = lVar13;
          if (*plVar15 == 0) {
            lVar16 = *(long *)(DAT_05574040 + 0x20);
          }
          if ((*(long **)(lVar16 + 0x98) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar16 + 0x98), puVar10 == (undefined8 *)0x0)) {
            uVar8 = 1;
          }
          else {
            uVar8 = (**(code **)*puVar10)();
            uVar8 = uVar8 ^ 1;
          }
          uVar9 = 0;
          lVar2 = *(long *)(lVar16 + 0x80) + *(long *)(lVar16 + 0x78);
          bVar3 = 0;
          if (*(byte *)(lVar2 + 0x178) < 3) {
            bVar3 = *(byte *)(lVar2 + 0x178);
          }
          uVar17 = 0x1e;
          if (bVar3 != 1) {
            uVar17 = 0x14;
          }
          uVar4 = 0x28;
          if (bVar3 != 2) {
            uVar4 = uVar17;
          }
          uVar14 = *(uint *)(lVar2 + 0x158);
          if (0x13 < uVar14) {
            uVar14 = 0x14;
          }
          do {
            if (uVar9 < 0x28) {
              uVar1 = (int)uVar9 - uVar14;
              pcVar6 = (char *)(lVar2 + 0xa4) + uVar1;
              if (0x13 < uVar1) {
                pcVar6 = (char *)(lVar2 + 0xa4);
              }
              pcVar7 = (char *)(lVar2 + 0x15c + uVar9);
              if (uVar14 <= uVar9) {
                pcVar7 = pcVar6;
              }
              if (*pcVar7 == '\x06') goto LAB_0267588c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
          uVar9 = (ulong)DAT_0559bc2c;
LAB_0267588c:
          if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x98) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x98) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
          if ((uint)uVar9 < 0x28) {
            if (*plVar15 == 0) {
              lVar13 = *(long *)(DAT_05574040 + 0x20);
            }
            if ((*(long **)(lVar13 + 0x98) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x98), puVar10 == (undefined8 *)0x0)) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)*puVar10)();
              uVar8 = uVar8 ^ 1;
            }
            uVar9 = 0;
            lVar16 = *(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78);
            bVar3 = 0;
            if (*(byte *)(lVar16 + 0x178) < 3) {
              bVar3 = *(byte *)(lVar16 + 0x178);
            }
            uVar17 = 0x1e;
            if (bVar3 != 1) {
              uVar17 = 0x14;
            }
            uVar4 = 0x28;
            if (bVar3 != 2) {
              uVar4 = uVar17;
            }
            uVar14 = *(uint *)(lVar16 + 0x158);
            if (0x13 < uVar14) {
              uVar14 = 0x14;
            }
            do {
              if (uVar9 < 0x28) {
                uVar1 = (int)uVar9 - uVar14;
                pcVar6 = (char *)(lVar16 + 0xa4) + uVar1;
                if (0x13 < uVar1) {
                  pcVar6 = (char *)(lVar16 + 0xa4);
                }
                pcVar7 = (char *)(lVar16 + 0x15c + uVar9);
                if (uVar14 <= uVar9) {
                  pcVar7 = pcVar6;
                }
                if (*pcVar7 == '\a') goto LAB_0267599c;
              }
              uVar9 = uVar9 + 1;
            } while (uVar4 != uVar9);
            uVar9 = (ulong)DAT_0559bc2c;
LAB_0267599c:
            if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            iVar11 = 7;
            if ((uint)uVar9 < 0x28) {
              iVar11 = -1;
            }
          }
          else {
            iVar11 = 6;
          }
        }
        else {
          iVar11 = 5;
        }
      }
      else {
        iVar11 = 4;
      }
    }
    else {
      iVar11 = 3;
    }
  }
  else {
    iVar11 = 2;
  }
  return iVar11;
}

