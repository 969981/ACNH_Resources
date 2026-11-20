
void FUN_03f70108(long *param_1)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  uint uVar8;
  
  puVar1 = (uint *)((long)param_1 + 0x34e0b4);
  uVar4 = *(uint3 *)puVar1;
  uVar5 = (**(code **)(**(long **)(*param_1 + 0x78) + 0x10))(*(long **)(*param_1 + 0x78),uVar4 - 1);
  if (uVar5 == 0) {
    uVar6 = (**(code **)(**(long **)(*param_1 + 0x78) + 0x18))
                      (*(long **)(*param_1 + 0x78),uVar4 - 1);
    if ((uVar6 & 1) == 0) {
      uVar3 = *(ushort *)puVar1;
      *(ushort *)puVar1 = uVar3 + 1;
      if ((char)param_1[0x69c1a] == '\0') {
        FUN_03f4d1a0(param_1,0,(short)param_1[0x69c1d],*(undefined1 *)((long)param_1 + 0x34e0b6));
        uVar5 = *(ushort *)(param_1 + 0x69c1d) - 1;
        *(short *)(param_1 + 0x69c1d) = (short)uVar5;
        if ((char)param_1[0x69c1a] != '\0') {
          *(undefined1 *)((long)param_1 + 0x34e0e9) = 1;
          uVar5 = (uint)*(ushort *)(param_1 + 0x69c1d);
        }
        uVar8 = (uint)*(ushort *)puVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(param_1 + 0x69c1d);
        uVar8 = (ushort)(uVar3 + 1) - 1;
      }
      FUN_03f4d1a0(param_1,0,uVar5,uVar8 >> 8);
      uVar3 = *(ushort *)(param_1 + 0x69c1d);
      *(short *)(param_1 + 0x69c1d) = (short)(uVar3 - 1);
      FUN_03f4d1a0(param_1,0,uVar3 - 1,uVar8);
      *(short *)(param_1 + 0x69c1d) = (short)param_1[0x69c1d] + -1;
      bVar2 = (char)param_1[0x69c1a] != '\0';
      if (bVar2) {
        *(undefined1 *)((long)param_1 + 0x34e0e9) = 1;
      }
      if (*(char *)((long)param_1 + 0x34e0d1) == '\0') {
        uVar5 = (uint)*(byte *)((long)param_1 + 0x34e0d2);
      }
      else {
        *(undefined1 *)((long)param_1 + 0x34e0d1) = 0;
        uVar5 = (uint)*(byte *)((long)param_1 + 0x34e0cf) << 2;
        if (*(char *)((long)param_1 + 0x34e0ce) != '\0') {
          uVar5 = uVar5 | 0x40;
        }
        uVar5 = uVar5 | *(byte *)((long)param_1 + 0x34e0cb);
        if (*(char *)((long)param_1 + 0x34e0cd) != '\0') {
          uVar5 = uVar5 | 0x10;
        }
        if (*(char *)((long)param_1 + 0x34e0cc) != '\0') {
          uVar5 = uVar5 | 0x20;
        }
        if (*(char *)((long)param_1 + 0x34e0ca) != '\0') {
          uVar5 = uVar5 | 0xffffff80;
        }
        if (*(char *)((long)param_1 + 0x34e0c9) != '\0') {
          uVar5 = uVar5 | 2;
        }
        if ((char)param_1[0x69c19] != '\0') {
          uVar5 = uVar5 | 8;
        }
        if (bVar2) {
          uVar5 = uVar5 | 0x30;
        }
        *(char *)((long)param_1 + 0x34e0d2) = (char)uVar5;
      }
      FUN_03f4d1a0(param_1,0,(short)param_1[0x69c1d],uVar5);
      *(short *)(param_1 + 0x69c1d) = (short)param_1[0x69c1d] + -1;
      if ((char)param_1[0x69c1a] == '\0') {
        *(undefined1 *)((long)param_1 + 0x34e0cf) = 1;
        *(undefined1 *)((long)param_1 + 0x34e0d1) = 1;
        *(undefined1 *)(param_1 + 0x69c19) = 0;
        *(int *)((long)param_1 + 0x34e0bc) =
             *(int *)((long)param_1 + 0x34e0bc) + *(short *)((long)param_1 + 0x3861d6) * 2;
        uVar5 = FUN_03f5914c(param_1,0xffe6);
        *(char *)(param_1 + 0x69c17) = (char)(uVar5 >> 8);
        *puVar1 = uVar5 & 0xffff;
        iVar7 = *(int *)((long)param_1 + 0x34e0bc) + 0xc00;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x34e0e9) = 1;
        *(undefined1 *)((long)param_1 + 0x34e0cf) = 1;
        *(undefined1 *)((long)param_1 + 0x34e0d1) = 1;
        *(undefined1 *)(param_1 + 0x69c19) = 0;
        *(int *)((long)param_1 + 0x34e0bc) =
             *(int *)((long)param_1 + 0x34e0bc) + *(short *)((long)param_1 + 0x3861d6) * 2;
        uVar5 = FUN_03f5914c(param_1,0xfffe);
        *(char *)(param_1 + 0x69c17) = (char)(uVar5 >> 8);
        *puVar1 = uVar5 & 0xffff;
        iVar7 = *(int *)((long)param_1 + 0x34e0bc) + 0x600;
      }
      *(int *)((long)param_1 + 0x34e0bc) = iVar7;
    }
  }
  else if (0 < (int)uVar5) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[(ulong)(uVar5 & 0xff) * 2 + 0x7959d];
    if ((param_1[(ulong)(uVar5 & 0xff) * 2 + 0x7959e] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE +
                     *(long *)((long)param_1 + (param_1[(ulong)(uVar5 & 0xff) * 2 + 0x7959e] >> 1)))
      ;
    }
                    /* WARNING: Could not recover jumptable at 0x03f70188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

