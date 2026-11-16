
void FUN_02986bf0(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined *local_40;
  long local_38;
  undefined1 local_30;
  byte local_2f;
  int local_28;
  uint local_24;
  
  uVar5 = FUN_01810f30();
  if ((uVar5 & 1) != 0) {
    if (DAT_05574040 == 0) {
      return;
    }
    lVar6 = FUN_026f480c();
    if (lVar6 == 0) {
      return;
    }
    if ((*(long **)(lVar6 + 0xdc70) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xdc70), puVar7 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar7)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = *(byte *)(*(long *)(lVar6 + 0xdc58) + *(long *)(lVar6 + 0xdc50) + 0x6c0c);
    if (((DAT_0523c4c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0523c4c0), iVar4 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar5 = 0;
      do {
        if (*(uint *)(DAT_0523c4b8 + uVar5 * 4) == (uint)bVar1) goto LAB_02986e2c;
        uVar5 = uVar5 + 1;
      } while (DAT_0523c4b0 != uVar5);
    }
    uVar5 = 0;
LAB_02986e2c:
    *param_1 = (int)uVar5;
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar6 + 0xdc70) == 0) {
      return;
    }
    puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xdc70) + 8);
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02986e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar7)();
    return;
  }
  if (DAT_05aed670 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  iVar4 = *(int *)(puVar7 + 7);
  local_28 = iVar4;
  uVar5 = FUN_017f37d0(iVar4);
  if ((uVar5 & 1) != 0) {
    uVar3 = FUN_017f6cc8(iVar4);
    local_24 = FUN_017f4660(&local_28);
    local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
    lVar6 = *(long *)PTR_DAT_04bb46b0;
    if (lVar6 == 0) {
      return;
    }
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return;
      }
    }
    if (7 < (uint)local_40) {
      return;
    }
    lVar8 = lVar6 + 0x119228 + ((ulong)local_40 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_40) {
      lVar8 = lVar6 + 0x119228;
    }
    lVar6 = lVar8 + 0x1df8 + (ulong)local_24 * 0x2488;
    if (5 < local_24) {
      lVar6 = lVar8 + 0x1df8;
    }
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar7)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = *(byte *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x6c0c);
    if (((DAT_0523c4c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0523c4c0), iVar4 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar5 = 0;
      do {
        if (*(uint *)(DAT_0523c4b8 + uVar5 * 4) == (uint)bVar1) goto LAB_0298718c;
        uVar5 = uVar5 + 1;
      } while (DAT_0523c4b0 != uVar5);
    }
    goto LAB_02987188;
  }
  if (iVar4 < 0x427dece) {
    if (iVar4 < -0x11f68f68) {
      if (iVar4 < -0x4772f804) {
        if ((iVar4 != -0x7b521843) && (iVar4 != -0x74337aab)) {
          iVar9 = -0x66cc4d79;
          goto LAB_02987100;
        }
      }
      else if ((iVar4 != -0x4772f804) && (iVar4 != -0x4701dc58)) {
        iVar9 = -0x196792d8;
        goto LAB_02987100;
      }
    }
    else if (iVar4 < -0x917edf9) {
      if (iVar4 != -0x11f68f68) {
        if (iVar4 != -0x11ea17dc) {
          iVar9 = -0xbf1cc08;
          goto LAB_02987100;
        }
        goto LAB_02986fb4;
      }
    }
    else {
      if (iVar4 < 0x5f6c88) {
        if (iVar4 != -0x917edf9) {
          iVar9 = -0x8fb780d;
          goto LAB_02986fac;
        }
LAB_02986fb4:
        if (DAT_05574040 == 0) {
          return;
        }
        lVar8 = FUN_026f480c();
        if (lVar8 == 0) {
          return;
        }
        uVar2 = FUN_017f4660(&local_28);
        lVar6 = lVar8 + 0x118 + (ulong)uVar2 * 0x2488;
        if (5 < uVar2) {
          lVar6 = lVar8 + 0x118;
        }
        if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar7)();
          uVar2 = uVar2 ^ 1;
        }
        bVar1 = *(byte *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x6c0c);
        if (((DAT_0523c4c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0523c4c0), iVar4 != 0)) {
          FUN_016cb6ac(&DAT_0523c4b0);
          __cxa_guard_release(&DAT_0523c4c0);
        }
        if (0 < (int)DAT_0523c4b0) {
          uVar5 = 0;
          do {
            if (*(uint *)(DAT_0523c4b8 + uVar5 * 4) == (uint)bVar1) goto LAB_0298718c;
            uVar5 = uVar5 + 1;
          } while (DAT_0523c4b0 != uVar5);
        }
LAB_02987188:
        uVar5 = 0;
LAB_0298718c:
        *param_1 = (int)uVar5;
        if ((uVar2 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar6 + 0x28) == 0) {
          return;
        }
        puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8);
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar7)();
        return;
      }
      if (iVar4 != 0x5f6c88) {
        iVar9 = 0x1ac1236;
        goto LAB_02987100;
      }
    }
  }
  else {
    if (0x60c2c4ef < iVar4) {
      if (0x6c9ebc70 < iVar4) {
        if (iVar4 < 0x77870a84) {
          if (iVar4 == 0x6c9ebc71) goto LAB_02986fb4;
          iVar9 = 0x72a13146;
        }
        else {
          if (iVar4 == 0x77870a84) goto LAB_02987108;
          iVar9 = 0x7c939885;
        }
        goto LAB_02987100;
      }
      if (iVar4 == 0x60c2c4f0) goto LAB_02987108;
      if (iVar4 != 0x6168e44d) {
        iVar9 = 0x65b7732d;
LAB_02986fac:
        if (iVar4 != iVar9) goto LAB_029871b4;
      }
      goto LAB_02986fb4;
    }
    if (iVar4 < 0x1d096e7d) {
      if ((iVar4 != 0x427dece) && (iVar4 != 0xe716ff8)) {
        iVar9 = 0x16f2dadc;
        goto LAB_02987100;
      }
    }
    else if ((iVar4 != 0x1d096e7d) && (iVar4 != 0x28c45759)) {
      iVar9 = 0x4d702d55;
LAB_02987100:
      if (iVar4 != iVar9) {
LAB_029871b4:
        uVar5 = FUN_016cf9f0();
        if ((uVar5 & 1) == 0) {
          if (iVar4 < 0x2922957e) {
            if ((iVar4 == 0x80e20d8) || (iVar4 == 0xb6a5301)) goto LAB_02987234;
            iVar9 = 0x1490248c;
          }
          else {
            if ((iVar4 == 0x2922957e) || (iVar4 == 0x7a616e2f)) goto LAB_02987234;
            iVar9 = 0x51b9e069;
          }
          if (iVar4 == iVar9) {
LAB_02987234:
            uVar3 = FUN_017f4660(&local_28);
            local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
            lVar6 = FUN_02643020();
            if (lVar6 == 0) {
              return;
            }
            lVar8 = lVar6 + 0xe0 + ((ulong)local_40 & 0xffffffff) * 0x2488;
            if (5 < (uint)local_40) {
              lVar8 = lVar6 + 0xe0;
            }
            local_30 = 1;
            local_38 = lVar8;
            if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
              local_2f = 0;
            }
            else {
              puVar7 = (undefined8 *)**(long **)(lVar8 + 0x28);
              local_2f = 0;
              if (puVar7 != (undefined8 *)0x0) {
                local_2f = (**(code **)*puVar7)();
              }
            }
            local_2f = local_2f & 1;
            local_40 = PTR_DAT_04bbc590 + 0x10;
            FUN_021f1740(param_1,*(undefined1 *)
                                  (*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x6c0c));
            FUN_02640184(&local_40);
            return;
          }
          FUN_037845e0(&local_40);
        }
        else {
          FUN_016cb0b0(&local_40);
        }
        goto LAB_02987110;
      }
    }
  }
LAB_02987108:
  FUN_021f1200(&local_40);
LAB_02987110:
  *param_1 = (uint)local_40;
  return;
}

