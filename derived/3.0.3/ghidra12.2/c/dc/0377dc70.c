
/* WARNING: Removing unreachable block (ram,0x0377dd30) */

void FUN_0377dc70(undefined8 param_1,long *param_2,undefined2 *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_90 [2];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  ushort local_34 [2];
  
  (**(code **)(*param_2 + 0x38))(param_2);
  *param_3 = 0xffff;
  puVar1 = PTR_DAT_04bc3a48;
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || (DAT_05ab7608 == 0)) {
    if (DAT_05574040 != 0) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
         lVar8 != 0)) {
        if ((*(long **)(lVar8 + 0x36620) == (long *)0x0) ||
           (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x36620), puVar4 == (undefined8 *)0x0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)*puVar4)();
          uVar5 = uVar5 & 0xffffffff;
        }
        uVar6 = FUN_029066e0(*(long *)(lVar8 + 0x36608) + *(long *)(lVar8 + 0x36600),param_1);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x36620) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x36620) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
        lVar2 = DAT_05ab5ea8;
        if (((uVar6 & 1) != 0) && (DAT_05ab5ea8 != 0)) {
          if ((*(long **)(lVar8 + 0x37c70) == (long *)0x0) ||
             (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x37c70), puVar4 == (undefined8 *)0x0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)*puVar4)();
            uVar5 = uVar5 & 0xffffffff;
          }
          local_34[0] = 0;
          FUN_0374a300(local_34,*(undefined1 *)
                                 (*(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 0x32));
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x37c70) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x37c70) + 8), puVar4 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar4)();
          }
          (**(code **)(*param_2 + 0x38))(param_2);
          if ((*(long **)(lVar8 + 0x37c70) == (long *)0x0) ||
             (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x37c70), puVar4 == (undefined8 *)0x0)) {
            *param_3 = *(undefined2 *)(*(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 2);
          }
          else {
            uVar5 = (**(code **)*puVar4)();
            *param_3 = *(undefined2 *)(*(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 2);
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x37c70) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x37c70) + 8),
               puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)();
            }
          }
          if ((*(int *)(lVar2 + 0x14) == 0) ||
             ((*(ushort **)puVar1 != (ushort *)0x0 && ((**(ushort **)puVar1 & 1) != 0)))) {
            uVar3 = local_34[0] >> 4 & 0xf;
            local_80 = (undefined *)
                       (CONCAT44(local_80._4_4_,(uint)local_34[0]) & 0xffffffff0000000f);
            if ((int)local_80 != 1) {
              uVar3 = 0;
            }
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar3);
            if (uVar3 == 2) {
              return;
            }
            lVar8 = FUN_0375f980(param_1);
            if (lVar8 == 0) {
              return;
            }
            if ((*(long **)(lVar8 + 0x1758) == (long *)0x0) ||
               (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x1758), puVar4 == (undefined8 *)0x0)) {
              uVar3 = 1;
            }
            else {
              uVar3 = (**(code **)*puVar4)();
              uVar3 = uVar3 ^ 1;
            }
            local_88 = *(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 4;
            local_90[0] = 0x17;
            (**(code **)(*param_2 + 0x38))(param_2);
            local_68 = 0;
            uStack_60 = 0;
            local_70 = 0;
            local_58 = 1;
            local_54 = 0;
            local_80 = PTR_DAT_04bc0cd8 + 0x10;
            uStack_78 = 0;
            FUN_02906b00(&local_80,param_2,local_90);
            if ((uVar3 & 1) != 0) {
              return;
            }
            lVar8 = *(long *)(lVar8 + 0x1758);
          }
          else {
            if ((*(long **)(lVar8 + 0x37c70) == (long *)0x0) ||
               (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x37c70), puVar4 == (undefined8 *)0x0)) {
              uVar3 = 1;
            }
            else {
              uVar3 = (**(code **)*puVar4)();
              uVar3 = uVar3 ^ 1;
            }
            local_88 = *(long *)(lVar8 + 0x37c58) + *(long *)(lVar8 + 0x37c50) + 4;
            local_90[0] = 0x17;
            (**(code **)(*param_2 + 0x38))(param_2);
            local_68 = 0;
            uStack_60 = 0;
            local_70 = 0;
            local_58 = 1;
            local_54 = 0;
            local_80 = PTR_DAT_04bc0cd8 + 0x10;
            uStack_78 = 0;
            FUN_02906b00(&local_80,param_2,local_90);
            if ((uVar3 & 1) != 0) {
              return;
            }
            lVar8 = *(long *)(lVar8 + 0x37c70);
          }
          goto joined_r0x0377e170;
        }
      }
    }
    lVar8 = FUN_03762b90(param_1);
    if (lVar8 == 0) {
      return;
    }
    if ((*(long **)(lVar8 + 0x1758) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x1758), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    local_88 = *(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 4;
    local_90[0] = 0x17;
    (**(code **)(*param_2 + 0x38))(param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_58 = 1;
    local_54 = 0;
    local_80 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_78 = 0;
    FUN_02906b00(&local_80,param_2,local_90);
    plVar7 = *(long **)(lVar8 + 0x1758);
    if ((uVar3 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0377df7c;
      if ((undefined8 *)plVar7[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar7[1])();
        plVar7 = *(long **)(lVar8 + 0x1758);
        goto LAB_0377df2c;
      }
    }
    else {
LAB_0377df2c:
      if (plVar7 == (long *)0x0) goto LAB_0377df7c;
    }
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
LAB_0377df7c:
      *param_3 = *(undefined2 *)(*(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 2);
      return;
    }
    uVar5 = (*(code *)**(undefined8 **)*plVar7)();
    *param_3 = *(undefined2 *)(*(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 2);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    lVar8 = *(long *)(DAT_05ab7608 + 8);
    if ((*(long **)(lVar8 + 0x1758) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x1758), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    local_88 = *(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 4;
    local_90[0] = 0x17;
    (**(code **)(*param_2 + 0x38))(param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_58 = 1;
    local_54 = 0;
    local_80 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_78 = 0;
    FUN_02906b00(&local_80,param_2,local_90);
    *param_3 = *(undefined2 *)(*(long *)(lVar8 + 0x1740) + *(long *)(lVar8 + 0x1738) + 2);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  lVar8 = *(long *)(lVar8 + 0x1758);
joined_r0x0377e170:
  if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar8 + 8))();
  }
  return;
}

