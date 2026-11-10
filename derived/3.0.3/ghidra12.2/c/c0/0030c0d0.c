
/* WARNING: Removing unreachable block (ram,0x0030c110) */

void FUN_0030c0d0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 == 0) || (param_4 - 0x12d < 0xfffffed4)) {
    local_24 = 0x10c07;
    goto LAB_0030c174;
  }
  if (param_4 == 1) {
    lVar1 = 0;
LAB_0030c154:
    *(undefined8 *)(param_2 + lVar1 * 8 + 0x18) = *(undefined8 *)(param_3 + lVar1 * 8);
  }
  else {
    lVar1 = 0;
    puVar2 = (undefined8 *)(param_2 + 0x20);
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      lVar1 = lVar1 + -2;
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    } while (-lVar1 != ((ulong)param_4 & 0xfffffffe));
    lVar1 = -lVar1;
    if ((param_4 & 1) != 0) goto LAB_0030c154;
  }
  *(uint *)(param_2 + 0x978) = param_4;
  local_24 = 0;
  *(undefined1 *)(param_2 + 0x97c) = 1;
LAB_0030c174:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

