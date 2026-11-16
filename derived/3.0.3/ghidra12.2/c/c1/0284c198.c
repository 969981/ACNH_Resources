
void FUN_0284c198(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  byte local_47;
  
  if (*(char *)((long)param_1 + 0x2f) == '\x02') {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,8);
    if ((*(ushort *)((long)param_1 + 0x3e) >> 8 & 1) == 0) {
      FUN_028483f0();
      if (((param_2 & 1) == 0) && (DAT_055a3458 != 1)) {
        cVar1 = *(char *)((long)param_1 + 0x2c);
        lVar4 = FUN_0265c2a0((int)cVar1);
        if (lVar4 != 0) {
          if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
            uVar2 = 1;
          }
          else {
            uVar2 = (**(code **)*puVar5)();
            uVar2 = uVar2 ^ 1;
          }
          iVar3 = FUN_026b318c(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_1);
          if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0))
          {
            (**(code **)*puVar5)();
          }
          if (-1 < iVar3) {
            FUN_021d7650((int)cVar1,iVar3,0xfffffff9,1);
          }
        }
        cVar1 = *(char *)((long)param_1 + 0x3c);
        uVar2 = (uint)cVar1;
        if ((DAT_055a3458 & 1) == 0) {
          lVar4 = FUN_0265c2a0((int)cVar1);
          if (lVar4 != 0) {
            local_48 = 1;
            local_50 = lVar4;
            if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
              local_47 = 0;
            }
            else {
              puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28);
              local_47 = 0;
              if (puVar5 != (undefined8 *)0x0) {
                local_47 = (**(code **)*puVar5)();
              }
            }
            local_47 = local_47 & 1;
            local_58 = PTR_DAT_04bb67a0 + 0x10;
            iVar3 = FUN_026b318c(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_1);
            FUN_02640184(&local_58);
            if (-1 < iVar3) {
              FUN_021d7650((int)cVar1,iVar3,0xffffffff,1);
            }
          }
        }
      }
      else {
        uVar2 = (uint)*(char *)((long)param_1 + 0x3c);
      }
      if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
        FUN_0214e870(&DAT_053febf8 + (ulong)uVar2 * 0xba0,uVar2);
      }
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0x101;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 **)((long)param_1 + 0x24) = &LAB_01010000;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0xff;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x2f) = 0;
  return;
}

