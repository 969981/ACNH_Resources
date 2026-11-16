
void FUN_027a8874(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2[7] != 0 && *param_2 != 0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    param_1[2] = uVar4;
    *param_1 = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[6] = uVar1;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
  }
  memcpy(param_1 + 7,param_2 + 0xe,0x100);
  uVar2 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x4e),(uint)*(byte *)((long)param_2 + 0x13a),
                     (uint)*(byte *)((long)param_2 + 0x13b));
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  else {
    uVar3 = FUN_0272eca4(param_2 + 0x4e,1);
    uVar2 = nn::time::IsValidDate
                      ((uint)uVar3 & 0xffff,(uint)uVar3 >> 0x10 & 0xff,
                       (uint)((ulong)uVar3 >> 0x18) & 0xff);
    if ((uVar2 & 1) != 0) {
      *(short *)(param_1 + 0x27) = (short)uVar3;
      *(char *)((long)param_1 + 0x13a) = (char)((ulong)uVar3 >> 0x10);
      *(char *)((long)param_1 + 0x13b) = (char)((ulong)uVar3 >> 0x18);
    }
  }
  *(short *)((long)param_1 + 0x14c) = (short)param_2[0x53];
  *(undefined1 *)((long)param_1 + 0x14e) = *(undefined1 *)((long)param_2 + 0x14e);
  *(undefined1 *)((long)param_1 + 0x14f) = *(undefined1 *)((long)param_2 + 0x14f);
  *(int *)(param_1 + 0x2a) = param_2[0x54];
  *(short *)((long)param_1 + 0x154) = (short)param_2[0x55];
  *(undefined1 *)((long)param_1 + 0x156) = *(undefined1 *)((long)param_2 + 0x156);
  return;
}

