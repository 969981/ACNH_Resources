
void FUN_0024045c(undefined8 param_1,long param_2,long param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  FUN_0023fc04(local_44);
  if (local_44[0] == 0) {
    if (param_5 < *(int *)(param_2 + 0x340) + 0x18U) {
      local_54 = 0x10c07;
    }
    else {
      puVar1 = (uint *)(param_3 + (ulong)*param_4);
      uVar2 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
      *puVar1 = uVar2 >> 0x10 | uVar2 << 0x10;
      *(ushort *)(puVar1 + 1) = *(ushort *)(param_2 + 0x1c) >> 8 | *(ushort *)(param_2 + 0x1c) << 8;
      *(undefined1 *)((long)puVar1 + 6) = *(undefined1 *)(param_2 + 0x1e);
      *(undefined1 *)((long)puVar1 + 7) = *(undefined1 *)(param_2 + 0x1f);
      uVar2 = (*(uint *)(param_2 + 0x340) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x340) & 0xff00ff) << 8;
      puVar1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
      memcpy(puVar1 + 3,(void *)(param_2 + 0x20),(ulong)*(uint *)(param_2 + 0x340));
      local_54 = 0;
      *param_4 = ((int)(puVar1 + 3) + *(int *)(param_2 + 0x340)) - (int)param_3;
    }
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    piVar3 = &local_54;
  }
  else {
    piVar3 = local_44;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

