
void FUN_002b72d8(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_3 != (undefined1 *)0x0) && (param_4 != (int *)0x0)) && (0x59f < param_5)) {
    *param_3 = *(undefined1 *)(param_2 + 8);
    param_3[1] = *(undefined1 *)(param_2 + 9);
    param_3[2] = *(undefined1 *)(param_2 + 10);
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_3 + 3) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    *(uint *)(param_3 + 7) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (*(uint *)(param_2 + 0x10) < 0x596) {
      memcpy(param_3 + 0xb,(void *)(param_2 + 0x14),(ulong)*(uint *)(param_2 + 0x10));
      iVar2 = ((int)(param_3 + 0xb) + *(int *)(param_2 + 0x10)) - (int)param_3;
      *param_4 = iVar2;
      if (*(int *)(param_2 + 0x10) + 0xb == iVar2) {
        local_44 = 0;
        goto LAB_002b7388;
      }
    }
  }
  local_44 = 0x10c07;
LAB_002b7388:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

