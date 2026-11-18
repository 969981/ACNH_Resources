
/* WARNING: Removing unreachable block (ram,0x0376fe10) */
/* WARNING: Removing unreachable block (ram,0x0376ffe0) */

bool FUN_0376fd60(long *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ushort local_28 [2];
  undefined4 local_24;
  
  lVar7 = DAT_053e67f0;
  if (DAT_053e67f0 == 0) {
    return false;
  }
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  lVar7 = FUN_0079e770(lVar7,&local_24);
  if (lVar7 == 0) {
LAB_03770074:
    bVar4 = false;
  }
  else {
    if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
      uVar5 = FUN_0376baa0(param_1);
      if ((uVar5 == 0xffff) || (DAT_05574040 == 0)) goto LAB_03770074;
      local_24 = 1;
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
         lVar7 != 0)) {
        plVar10 = *(long **)(lVar7 + 0x36658);
        if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (*(code *)**(undefined8 **)*plVar10)();
          plVar10 = *(long **)(lVar7 + 0x36658);
          uVar6 = uVar6 ^ 1;
        }
        lVar11 = *(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638);
        puVar1 = (ushort *)(lVar11 + 0x48b2);
        if ((*(byte *)(lVar11 + 0x48b5) & 1) != 0) {
          puVar1 = (ushort *)(lVar11 + 0x48b0);
        }
        uVar2 = *puVar1;
        if ((uVar6 & 1) == 0) {
          if (plVar10 != (long *)0x0) {
            if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)plVar10[1])();
              plVar10 = *(long **)(lVar7 + 0x36658);
              goto LAB_0376ff38;
            }
            goto LAB_0376ff3c;
          }
LAB_0376ff58:
          uVar6 = 1;
        }
        else {
LAB_0376ff38:
          if (plVar10 == (long *)0x0) goto LAB_0376ff58;
LAB_0376ff3c:
          if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_0376ff58;
          uVar6 = (*(code *)**(undefined8 **)*plVar10)();
          uVar6 = uVar6 ^ 1;
        }
        lVar11 = *(long *)(lVar7 + 0x36640) + *(long *)(lVar7 + 0x36638);
        puVar1 = (ushort *)(lVar11 + 0x48b0);
        if ((*(byte *)(lVar11 + 0x48b5) & 1) != 0) {
          puVar1 = (ushort *)(lVar11 + 0x48b2);
        }
        uVar3 = *puVar1;
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x36658) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x36658) + 8), puVar8 != (undefined8 *)0x0))
        {
          (**(code **)*puVar8)();
        }
        if ((uVar5 == uVar2) || (uVar5 == uVar3)) {
          if ((*(long **)(lVar7 + 0x37c70) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x37c70), puVar8 == (undefined8 *)0x0)) {
            uVar6 = 1;
          }
          else {
            uVar6 = (**(code **)*puVar8)();
            uVar6 = uVar6 ^ 1;
          }
          local_28[0] = 0;
          FUN_0374a300(local_28,*(undefined1 *)
                                 (*(long *)(lVar7 + 0x37c58) + *(long *)(lVar7 + 0x37c50) + 0x32));
          if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x37c70) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x37c70) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          return uVar3 != 0xffff && (local_28[0] & 0xf) - 3 < 0xfffffffe;
        }
      }
      if ((DAT_05574040 == 0) || (local_24 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)
         ) goto LAB_03770074;
      lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
      if (499 < uVar5) {
        return false;
      }
      if (lVar7 == 0) {
        return false;
      }
      lVar7 = lVar7 + (ulong)uVar5 * 0x2d48;
      if ((*(long **)(lVar7 + 0x4cc70) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x4cc70), puVar8 == (undefined8 *)0x0)) {
        lVar11 = *(long *)(lVar7 + 0x4cc50);
        lVar7 = *(long *)(lVar7 + 0x4cc58);
LAB_0376fed4:
        return *(short *)(lVar7 + lVar11 + 4) != -1;
      }
      uVar9 = (**(code **)*puVar8)();
      bVar4 = *(short *)(*(long *)(lVar7 + 0x4cc58) + *(long *)(lVar7 + 0x4cc50) + 4) != -1;
      if ((uVar9 & 1) == 0) {
        return bVar4;
      }
      lVar7 = *(long *)(lVar7 + 0x4cc70);
    }
    else {
      lVar7 = *(long *)(DAT_05ab7608 + 8);
      if (lVar7 == 0) goto LAB_03770074;
      if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar8 == (undefined8 *)0x0)) {
        lVar11 = *(long *)(lVar7 + 0x40);
        lVar7 = *(long *)(lVar7 + 0x48);
        goto LAB_0376fed4;
      }
      uVar9 = (**(code **)*puVar8)();
      bVar4 = *(short *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 4) != -1;
      if ((uVar9 & 1) == 0) {
        return bVar4;
      }
      lVar7 = *(long *)(lVar7 + 0x60);
    }
    if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar7 + 8))();
    }
  }
  return bVar4;
}

