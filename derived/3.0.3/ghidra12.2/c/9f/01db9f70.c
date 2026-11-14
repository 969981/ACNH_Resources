
void FUN_01db9f70(long param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  
  if ((*param_2 < 8) && (uVar5 = FUN_01db9aa8(param_1,param_2,0), (uVar5 & 1) != 0)) {
    iVar3 = FUN_01db8540(param_1 + 0x98,param_2,1);
    iVar4 = FUN_01db8920(param_1 + 0x98,param_2);
    if (iVar4 + iVar3 != 0) {
      bVar7 = *param_2;
      plVar1 = (long *)(param_1 + 0x84c8);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      *(byte *)(param_1 + 0x84f1) = bVar7;
      if ((param_4 & 1) == 0) {
        uVar5 = 0xe;
      }
      else {
        uVar5 = 0xd;
      }
      *(ulong *)(param_1 + 0x84f4) = uVar5 | 0x1300000000;
      *(undefined1 *)(param_1 + 0x8500) = 1;
      DAT_0537c938 = 0;
      if (param_3 == (undefined8 *)0x0) {
        if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
          *(undefined8 *)*plVar1 = 0;
          *plVar1 = 0;
        }
      }
      else {
        uVar2 = *(undefined1 *)(param_3 + 3);
        *plVar1 = (long)param_3;
        *(undefined1 *)(param_1 + 0x84e8) = uVar2;
        *param_3 = plVar1;
        lVar6 = *plVar1;
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
      }
      *(undefined2 *)(param_1 + 0x8506) = 0x101;
      FUN_01dba640(param_1);
      return;
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 1;
    param_3[2] = 0;
  }
  return;
}

