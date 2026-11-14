
void FUN_016ac2a0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined **local_80;
  long lStack_78;
  undefined8 local_70;
  undefined1 local_65;
  
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    if (*(long **)(lVar5 + 0x2181c8) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar5 + 0x2181c8);
      uVar6 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar9)();
      }
    }
    bVar2 = *(byte *)(*(long *)(lVar5 + 0x2181b0) + *(long *)(lVar5 + 0x2181a8) + 0x179d0);
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x2181c8) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x2181c8) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    iVar14 = 0;
    iVar12 = 0;
    iVar3 = (int)(char)bVar2;
    do {
      lVar13 = lVar5 + 0x218210 + (long)iVar14 * 0x38;
      if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar9 == (undefined8 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)*puVar9)();
        uVar6 = uVar6 & 0xffffffff;
      }
      pbVar1 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
      uVar10 = (ulong)*pbVar1;
      if (((0x22 < uVar10) || (bVar2 = pbVar1[1], (byte)PTR_DAT_04bc27f0[uVar10] < bVar2)) ||
         (((uint)(&DAT_053e6eb8)[uVar10] >> (ulong)(bVar2 & 0x1f) & 1) == 0)) {
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (*(long *)(lVar13 + 0x28) == 0) {
          return;
        }
        puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8);
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar9)();
        return;
      }
      lVar7 = FUN_016c91a4(iVar12);
      if (lVar7 != 0) {
        local_65 = 0;
        local_70 = CONCAT35(local_70._5_3_,8);
        local_80 = &PTR_LAB_04908da0;
        pbVar1 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        lStack_78 = (long)&local_70 + 4;
        FUN_038d1270(&local_80,"-----");
        uVar10 = (ulong)*pbVar1;
        if (uVar10 < 0x23) {
          FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar10 * 8 + 0xb0),
                       pbVar1[1]);
        }
        iVar4 = FUN_016b158c(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        lVar11 = *(long *)(lVar7 + 0x28);
        if (lVar11 == 0) {
          uVar10 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
            plVar8 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar10 = uVar10 & 0xffffffff;
            if (*(long *)(lVar7 + 0x28) == 0) goto LAB_016ac524;
            plVar8 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
          }
          if (plVar8 != (long *)0x0) {
            local_80 = *(undefined ***)(lVar7 + 8);
            lStack_78 = *(long *)(lVar7 + 0x10);
            local_70 = 0x1638;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
          }
        }
LAB_016ac524:
        *(bool *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1634) = iVar4 == 0;
        lVar11 = *(long *)(lVar7 + 0x28);
        if ((uVar10 & 1) == 0) {
LAB_016ac560:
          iVar4 = (uint)(iVar3 == iVar12) << 1;
          if (lVar11 == 0) {
            uVar10 = 0;
          }
          else {
            puVar9 = *(undefined8 **)(lVar11 + 0x10);
            if (puVar9 != (undefined8 *)0x0) goto LAB_016ac578;
LAB_016ac5cc:
            uVar10 = 0;
            plVar8 = *(long **)(lVar11 + 0x20);
joined_r0x016ac5d4:
            if (plVar8 != (long *)0x0) {
              local_80 = *(undefined ***)(lVar7 + 8);
              lStack_78 = *(long *)(lVar7 + 0x10);
              local_70 = 0x1638;
              (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
            }
          }
        }
        else if (lVar11 == 0) {
          uVar10 = 0;
          iVar4 = (uint)(iVar3 == iVar12) << 1;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            lVar11 = *(long *)(lVar7 + 0x28);
            goto LAB_016ac560;
          }
          iVar4 = (uint)(iVar3 == iVar12) << 1;
          puVar9 = *(undefined8 **)(lVar11 + 0x10);
          if (puVar9 == (undefined8 *)0x0) goto LAB_016ac5cc;
LAB_016ac578:
          uVar10 = (**(code **)*puVar9)();
          uVar10 = uVar10 & 0xffffffff;
          if (*(long *)(lVar7 + 0x28) != 0) {
            plVar8 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
            goto joined_r0x016ac5d4;
          }
        }
        local_80 = (undefined **)CONCAT44(local_80._4_4_,iVar4);
        *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1635) = (char)iVar4;
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0))
        {
          (**(code **)*puVar9)();
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar12 != 8);
  }
  return;
}

