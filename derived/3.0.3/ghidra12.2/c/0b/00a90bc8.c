
void FUN_00a90bc8(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar3 != 0) {
      lVar3 = lVar3 + 0x70;
LAB_00a90c40:
      plVar1 = (long *)(lVar3 + 0xe7158);
      lVar7 = *(long *)(lVar3 + 0xe7178);
      if (lVar7 == 0) {
        uVar4 = 0;
      }
      else {
        if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar7 + 0x20);
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar3 + 0xe7178) == 0) goto LAB_00a90cb4;
          plVar5 = *(long **)(*(long *)(lVar3 + 0xe7178) + 0x20);
        }
        if (plVar5 != (long *)0x0) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar3 + 0xe7160);
          uStack_48 = 0x14c;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
LAB_00a90cb4:
      uVar2 = param_2;
      if (1 < param_2) {
        uVar2 = 0;
      }
      *(uint *)(*(long *)(lVar3 + 0xe7160) + *plVar1 + 0x14) = uVar2;
      lVar7 = *(long *)(lVar3 + 0xe7178);
      if ((uVar4 & 1) == 0) {
LAB_00a90cec:
        if (lVar7 != 0) goto LAB_00a90cf0;
LAB_00a90d74:
        FUN_028da85c(*(long *)(lVar3 + 0xe7160) + *plVar1,3,1);
      }
      else {
        if (lVar7 == 0) goto LAB_00a90d74;
        if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          lVar7 = *(long *)(lVar3 + 0xe7178);
          goto LAB_00a90cec;
        }
LAB_00a90cf0:
        if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x00a90f8c:
          if (plVar5 != (long *)0x0) {
            local_58 = *plVar1;
            local_50 = *(undefined8 *)(lVar3 + 0xe7160);
            uStack_48 = 0x14c;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar3 + 0xe7178) != 0) {
            plVar5 = *(long **)(*(long *)(lVar3 + 0xe7178) + 0x20);
            goto joined_r0x00a90f8c;
          }
        }
        FUN_028da85c(*(long *)(lVar3 + 0xe7160) + *plVar1,3,1);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0xe7178) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0xe7178) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar6 == (undefined8 *)0x0)) {
        FUN_00930750(param_1 + 0x651f0,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1e35f0);
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        FUN_00930750(param_1 + 0x651f0,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1e35f0);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
    }
  }
  else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
          (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_00a90c40;
  if (DAT_05574040 == 0) {
    return;
  }
  lVar3 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)(lVar3 + 0x27c860);
  lVar7 = *(long *)(lVar3 + 0x27c880);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x27c880) == 0) goto LAB_00a90e98;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x27c880) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar3 + 0x27c868);
      uStack_48 = 0x14c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    }
  }
LAB_00a90e98:
  if (1 < param_2) {
    param_2 = 0;
  }
  *(uint *)(*(long *)(lVar3 + 0x27c868) + *plVar1 + 0x14) = param_2;
  lVar7 = *(long *)(lVar3 + 0x27c880);
  if ((uVar4 & 1) == 0) {
LAB_00a90ed0:
    if (lVar7 == 0) {
LAB_00a90f58:
      FUN_028da85c(*(long *)(lVar3 + 0x27c868) + *plVar1,3,0);
      return;
    }
  }
  else {
    if (lVar7 == 0) goto LAB_00a90f58;
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      lVar7 = *(long *)(lVar3 + 0x27c880);
      goto LAB_00a90ed0;
    }
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar5 = *(long **)(lVar7 + 0x20);
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar3 + 0x27c880) == 0) goto LAB_00a90f20;
    plVar5 = *(long **)(*(long *)(lVar3 + 0x27c880) + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar3 + 0x27c868);
    uStack_48 = 0x14c;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  }
LAB_00a90f20:
  FUN_028da85c(*(long *)(lVar3 + 0x27c868) + *plVar1,3,0);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x27c880) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x27c880) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

