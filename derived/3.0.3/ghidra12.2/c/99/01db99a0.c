
void FUN_01db99a0(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  
  uVar3 = FUN_01db9aa8(param_1,param_2,0);
  if ((uVar3 & 1) == 0) {
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = 0x2bffffffff;
      param_3[2] = 0;
    }
  }
  else {
    plVar1 = (long *)(param_1 + 0x84c8);
    if (*(int *)(param_1 + 0x84f4) == -1) {
      bVar5 = *param_2;
      *(undefined1 *)(param_1 + 0x8500) = 0;
      *(undefined8 *)(param_1 + 0x84f4) = 0xc00000002;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      *(byte *)(param_1 + 0x84f1) = bVar5;
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
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(undefined2 *)(param_1 + 0x8506) = 0x101;
      FUN_01dba640(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x8500) = 0;
    *(undefined4 *)(param_1 + 0x84f8) = 0xc;
    DAT_0537c938 = 0;
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = *(undefined1 *)(param_3 + 3);
      *plVar1 = (long)param_3;
      *(undefined1 *)(param_1 + 0x84e8) = uVar2;
      *param_3 = plVar1;
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
  }
  return;
}

