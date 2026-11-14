
bool FUN_016d59dc(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  byte local_47;
  
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = lVar4 + 0x70;
    }
  }
  else {
    lVar5 = (**(code **)(*(long *)(*(undefined8 **)(DAT_05574040 + 0x10))[0x26] + 0x38))();
  }
  if (*(long **)(&LAB_00274ea8 + lVar5) == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined8 *)**(long **)(&LAB_00274ea8 + lVar5);
    uVar7 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar6)();
    }
  }
  iVar1 = *(int *)(*(long *)(lVar5 + 0x274e90) + *(long *)(lVar5 + 0x274e88));
  if ((((uVar7 & 1) != 0) && (*(long *)(&LAB_00274ea8 + lVar5) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(&LAB_00274ea8 + lVar5) + 8), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  if (iVar1 == 0) {
    if (*(long **)(lVar5 + 0x275260) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar6 = (undefined8 *)**(long **)(lVar5 + 0x275260);
      uVar7 = 0;
      if (puVar6 != (undefined8 *)0x0) {
        uVar7 = (**(code **)*puVar6)();
      }
    }
    iVar1 = *(int *)(*(long *)(lVar5 + 0x275248) + *(long *)(lVar5 + 0x275240));
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x275260) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x275260) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if (iVar1 == 0) {
      if (*(long **)(lVar5 + 0x275618) == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        puVar6 = (undefined8 *)**(long **)(lVar5 + 0x275618);
        uVar7 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar6)();
        }
      }
      iVar1 = *(int *)(*(long *)(lVar5 + 0x275600) + *(long *)(lVar5 + 0x2755f8));
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x275618) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x275618) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
      if (iVar1 == 0) {
        if (*(long **)(lVar5 + 0x2759d0) == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          puVar6 = (undefined8 *)**(long **)(lVar5 + 0x2759d0);
          uVar7 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar6)();
          }
        }
        iVar1 = *(int *)(*(long *)(lVar5 + 0x2759b8) + *(long *)(lVar5 + 0x2759b0));
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x2759d0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x2759d0) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
        if (iVar1 == 0) {
          if (*(long **)(lVar5 + 0x275d88) == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar5 + 0x275d88);
            uVar7 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar7 = (**(code **)*puVar6)();
            }
          }
          iVar1 = *(int *)(*(long *)(lVar5 + 0x275d70) + *(long *)(lVar5 + 0x275d68));
          if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x275d88) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x275d88) + 8),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
          if (iVar1 == 0) {
            if (*(long **)(lVar5 + 0x276140) == (long *)0x0) {
              uVar7 = 0;
            }
            else {
              puVar6 = (undefined8 *)**(long **)(lVar5 + 0x276140);
              uVar7 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                uVar7 = (**(code **)*puVar6)();
              }
            }
            iVar1 = *(int *)(*(long *)(lVar5 + 0x276128) + *(long *)(lVar5 + 0x276120));
            if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x276140) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x276140) + 8),
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)();
            }
            if (iVar1 != 0) {
              return true;
            }
            local_48 = 1;
            local_50 = lVar5 + 0x2764d0;
            if (*(long **)(lVar5 + 0x2764f8) == (long *)0x0) {
              local_47 = 0;
            }
            else {
              puVar6 = (undefined8 *)**(long **)(lVar5 + 0x2764f8);
              local_47 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                local_47 = (**(code **)*puVar6)();
              }
            }
            puVar2 = PTR_DAT_04bb6c08;
            local_47 = local_47 & 1;
            local_58 = PTR_DAT_04bb6c08 + 0x10;
            iVar1 = *(int *)(*(long *)(lVar5 + 0x2764e0) + *(long *)(lVar5 + 0x2764d8));
            FUN_02640184(&local_58);
            if (iVar1 != 0) {
              return true;
            }
            local_48 = 1;
            local_50 = lVar5 + 0x276888;
            if (*(long **)(lVar5 + 0x2768b0) == (long *)0x0) {
              bVar3 = 0;
            }
            else {
              puVar6 = (undefined8 *)**(long **)(lVar5 + 0x2768b0);
              bVar3 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                bVar3 = (**(code **)*puVar6)();
              }
            }
            local_47 = bVar3 & 1;
            local_58 = puVar2 + 0x10;
            iVar1 = *(int *)(*(long *)(lVar5 + 0x276898) + *(long *)(lVar5 + 0x276890));
            FUN_02640184(&local_58);
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return true;
}

