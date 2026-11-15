
void FUN_020ef854(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb4f78;
  bVar9 = param_1[1];
  cVar1 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar9);
  lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar6 = FUN_0265ca50((int)cVar1,*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc154);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar6 + 0x28);
      if (lVar4 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar8 = *(long **)(lVar4 + 0x20);
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(lVar6 + 0x28) == 0) goto LAB_020efa38;
          plVar8 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20);
        }
        if (plVar8 != (long *)0x0) {
          local_58 = *(undefined8 *)(lVar6 + 8);
          uStack_50 = *(undefined8 *)(lVar6 + 0x10);
          local_48 = 0x5f0;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
        }
      }
LAB_020efa38:
      lVar4 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
      *(undefined2 *)(lVar4 + 0x5b4) = *(undefined2 *)(param_1 + 4);
      *(char *)(lVar4 + 0x5b6) = param_1[6];
      *(char *)(lVar4 + 0x5b7) = param_1[7];
      *(undefined4 *)(lVar4 + 0x5b8) = *(undefined4 *)(param_1 + 8);
      lVar4 = *(long *)(lVar6 + 0x28);
      if ((uVar7 & 1) == 0) {
LAB_020efa84:
        if (lVar4 != 0) goto LAB_020efa88;
LAB_020efb04:
        *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x5bc) =
             (ushort)(byte)param_1[0xc];
LAB_020efb14:
        lVar4 = *(long *)(lVar6 + 0x28);
        if (lVar4 == 0) goto LAB_020efb48;
        if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar8 = *(long **)(lVar4 + 0x20);
joined_r0x020efb70:
          if (plVar8 != (long *)0x0) {
            local_58 = *(undefined8 *)(lVar6 + 8);
            uStack_50 = *(undefined8 *)(lVar6 + 0x10);
            local_48 = 0x5f0;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
          }
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(lVar6 + 0x28) != 0) {
            plVar8 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20);
            goto joined_r0x020efb70;
          }
        }
      }
      else {
        if (lVar4 == 0) goto LAB_020efb04;
        if (*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar4 + 0x18))();
          lVar4 = *(long *)(lVar6 + 0x28);
          goto LAB_020efa84;
        }
LAB_020efa88:
        if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar8 = *(long **)(lVar4 + 0x20);
joined_r0x020efb60:
          if (plVar8 != (long *)0x0) {
            local_58 = *(undefined8 *)(lVar6 + 8);
            uStack_50 = *(undefined8 *)(lVar6 + 0x10);
            local_48 = 0x5f0;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
          }
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(lVar6 + 0x28) != 0) {
            plVar8 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20);
            goto joined_r0x020efb60;
          }
        }
        *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x5bc) =
             (ushort)(byte)param_1[0xc];
        if ((uVar7 & 1) == 0) goto LAB_020efb14;
        if (*(long *)(lVar6 + 0x28) != 0) {
          puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)();
          }
          goto LAB_020efb14;
        }
LAB_020efb48:
        uVar7 = 0;
      }
      local_58 = CONCAT44(local_58._4_4_,(int)param_1[0xe]);
      *(char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x5be) = param_1[0xe];
      goto joined_r0x020efd34;
    }
  }
  bVar9 = param_1[1];
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar9);
  lVar4 = FUN_025830c0(*(undefined8 *)puVar2,&local_58,1);
  if (lVar4 == 0) {
    return;
  }
  if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  lVar6 = FUN_0265cc60((int)cVar1,*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc154);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (lVar6 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar6 + 0x28);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      lVar4 = *(long *)(lVar6 + 0x28);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar4 == 0) goto LAB_020efbe0;
    }
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar6 + 8);
      uStack_50 = *(undefined8 *)(lVar6 + 0x10);
      local_48 = 0x158;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
LAB_020efbe0:
  lVar4 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
  *(undefined2 *)(lVar4 + 0x14c) = *(undefined2 *)(param_1 + 4);
  *(char *)(lVar4 + 0x14e) = param_1[6];
  *(char *)(lVar4 + 0x14f) = param_1[7];
  *(undefined4 *)(lVar4 + 0x150) = *(undefined4 *)(param_1 + 8);
  lVar4 = *(long *)(lVar6 + 0x28);
  if ((uVar7 & 1) == 0) {
LAB_020efc2c:
    if (lVar4 != 0) goto LAB_020efc30;
LAB_020efcac:
    *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x154) = (ushort)(byte)param_1[0xc]
    ;
LAB_020efcbc:
    lVar4 = *(long *)(lVar6 + 0x28);
    if (lVar4 == 0) goto LAB_020efce8;
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
LAB_020efcf4:
      plVar8 = *(long **)(lVar4 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar6 + 8);
        uStack_50 = *(undefined8 *)(lVar6 + 0x10);
        local_48 = 0x158;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      }
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      lVar4 = *(long *)(lVar6 + 0x28);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar4 != 0) goto LAB_020efcf4;
    }
  }
  else {
    if (lVar4 == 0) goto LAB_020efcac;
    if (*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      lVar4 = *(long *)(lVar6 + 0x28);
      goto LAB_020efc2c;
    }
LAB_020efc30:
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar4 + 0x20);
joined_r0x020efd74:
      if (plVar8 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar6 + 8);
        uStack_50 = *(undefined8 *)(lVar6 + 0x10);
        local_48 = 0x158;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      }
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar6 + 0x28) != 0) {
        plVar8 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20);
        goto joined_r0x020efd74;
      }
    }
    *(ushort *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x154) = (ushort)(byte)param_1[0xc]
    ;
    if ((uVar7 & 1) == 0) goto LAB_020efcbc;
    if (*(long *)(lVar6 + 0x28) != 0) {
      puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
      goto LAB_020efcbc;
    }
LAB_020efce8:
    uVar7 = 0;
  }
  local_58 = CONCAT44(local_58._4_4_,(int)param_1[0xe]);
  *(char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x156) = param_1[0xe];
joined_r0x020efd34:
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

