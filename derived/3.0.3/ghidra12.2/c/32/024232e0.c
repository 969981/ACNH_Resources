
void FUN_024232e0(byte *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined2 local_70 [2];
  uint local_6c;
  uint local_68;
  uint local_64;
  
  bVar12 = *param_1;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar12);
  lVar7 = FUN_02583354(DAT_055021a0,&local_88,1);
  if ((lVar7 != 0) && (*(char *)(param_2 + 0x68) != '\0')) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      local_90 = 0xfffe;
      FUN_0277d4ac(&local_90);
      if ((7 < uVar14) || (*(byte *)(param_2 + 0x68) <= uVar14)) goto switchD_02423438_default;
      local_88 = (undefined *)0xfffe;
      puVar10 = (undefined8 *)(param_2 + 0x20 + uVar14 * 9);
      FUN_0277d4ac(&local_88);
      puVar3 = PTR_DAT_04bb43c0;
      local_90 = *puVar10;
      bVar12 = *(byte *)(puVar10 + 1);
      if (0xd < bVar12) {
        bVar12 = 0;
      }
      switch(bVar12) {
      case 1:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_0242384c;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_0242384c:
        puVar2 = (undefined2 *)(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
        *puVar2 = (undefined2)local_90;
        *(undefined1 *)(puVar2 + 1) = local_90._2_1_;
        *(undefined1 *)((long)puVar2 + 3) = local_90._3_1_;
        *(undefined4 *)(puVar2 + 2) = local_90._4_4_;
        break;
      case 2:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_024238a4;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_024238a4:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x8b0) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x8b4) = local_90._4_4_;
        goto joined_r0x024238fc;
      case 3:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_024238e8;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_024238e8:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x8b8) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x8bc) = local_90._4_4_;
joined_r0x024238fc:
        if ((uVar8 & 1) == 0) goto switchD_02423438_default;
        goto LAB_02423aa0;
      case 4:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_0242392c;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_0242392c:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x1190) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x1194) = local_90._4_4_;
        break;
      case 5:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_02423970;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_02423970:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x8c0) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x8c4) = local_90._4_4_;
        break;
      case 6:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_024239b4;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_024239b4:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x1170) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x1174) = local_90._4_4_;
        break;
      case 7:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_024239f8;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_024239f8:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x1178) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x117c) = local_90._4_4_;
        break;
      case 8:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_02423a3c;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_02423a3c:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x1180) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x1184) = local_90._4_4_;
        break;
      case 9:
        if (((uint)local_90 & 0xffff) == 0xfffe) {
LAB_02423390:
          FUN_02471f38(param_1,&local_90,1,0xffffffff);
        }
        else {
          lVar11 = *(long *)PTR_DAT_04bb43c0;
          uVar4 = FUN_0277d6c4(&local_90);
          lVar13 = *(long *)puVar3;
          if (lVar13 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              local_78 = 0;
              local_80 = local_90;
              local_88 = puVar1;
              uVar4 = FUN_0277d6c4(&local_80);
              if (DAT_053274a0 != 0) {
                lVar11 = *(long *)(lVar13 + 0x57e58);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                  lVar11 = *(long *)PTR_DAT_04bc0428;
                  uVar4 = FUN_0277d6c4(&local_90);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
                     (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
                     lVar11 != 0)) {
                    local_78 = lVar11;
                  }
                }
              }
              local_70[0] = 0;
              FUN_01adab50(&local_88,local_70);
              uVar4 = 0;
              do {
                local_6c = uVar4;
                if ((local_6c != 0) && (local_68 = local_6c, local_6c < 0xe)) {
                  uVar4 = local_6c + 7;
                  if (-1 < (int)local_6c) {
                    uVar4 = local_6c;
                  }
                  local_64 = local_6c;
                  if (((uint)((int)uVar4 >> 3) < 2) &&
                     ((*(byte *)((long)local_70 + (ulong)(uint)((int)uVar4 >> 3)) >>
                       (ulong)(local_6c & 7) & 1) != 0)) {
                    if (local_6c == 9) {
                      iVar5 = FUN_01ad78cc(&local_88);
                      if ((iVar5 == 0x43) || (uVar8 = FUN_0277e8b4(&local_90), (uVar8 & 1) == 0))
                      goto LAB_02423390;
                      iVar5 = FUN_01ad78cc(&local_88);
                      if (iVar5 == 0x48) {
                        uVar6 = FUN_026788f0(param_1,&local_90);
                        uVar4 = FUN_0251a524(param_1);
                        FUN_02471c6c(param_1,&local_90,uVar6,(uVar4 ^ 0xffffffff) & 1);
                      }
                      else {
                        iVar5 = FUN_0277d6c4(&local_80);
                        if (((iVar5 - 0x307U < 5) || (iVar5 == 0x305)) ||
                           ((uVar8 = FUN_016e4ef8(), (uVar8 & 1) != 0 &&
                            (iVar5 = FUN_01ad78cc(&local_88), iVar5 == 0x16)))) goto LAB_02423390;
                      }
                    }
                    break;
                  }
                }
                uVar4 = local_6c + 1;
              } while (local_6c + 1 != 0xe);
            }
          }
        }
        goto switchD_02423438_default;
      case 10:
        lVar11 = *(long *)(lVar7 + 0x178);
        if (lVar11 == 0) {
          uVar8 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar7 + 0x178) == 0) goto LAB_02423a80;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            local_88 = *(undefined **)(lVar7 + 0x158);
            local_80 = *(undefined8 *)(lVar7 + 0x160);
            local_78 = 0x1198;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_88);
          }
        }
LAB_02423a80:
        lVar11 = *(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158);
        *(undefined4 *)(lVar11 + 0x1188) = (undefined4)local_90;
        *(undefined4 *)(lVar11 + 0x118c) = local_90._4_4_;
        break;
      default:
        goto switchD_02423438_default;
      }
      if ((uVar8 & 1) != 0) {
LAB_02423aa0:
        if ((*(long *)(lVar7 + 0x178) != 0) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x178) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
      }
switchD_02423438_default:
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(byte *)(param_2 + 0x68));
  }
  return;
}

