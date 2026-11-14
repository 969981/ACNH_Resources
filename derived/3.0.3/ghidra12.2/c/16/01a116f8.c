
uint FUN_01a116f8(long param_1,undefined1 *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined1 *)0x0) {
    return DAT_052d1e28;
  }
  if (param_3 == 0xfffe) {
LAB_01a1171c:
    uVar2 = 2;
  }
  else {
    if ((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) && (*(int *)(param_1 + 0x18) != 0))
    {
      puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      if (((DAT_052d2590 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052d2590), iVar3 != 0)) {
        DAT_052d2588 = &PTR_LAB_049fa588;
        __cxa_guard_release(&DAT_052d2590);
      }
      if ((((puVar5 != (undefined8 *)0x0) &&
           (uVar4 = (**(code **)*puVar5)(puVar5,&DAT_052d2588), (uVar4 & 1) != 0)) &&
          (uVar2 = (param_3 & 0xffff) - (uint)*(ushort *)(puVar5 + 0x3f),
          uVar2 < *(uint *)(puVar5 + 0x3b))) &&
         (*(long *)(puVar5[0x3c] + (long)(int)uVar2 * 8) != 0)) {
        *param_2 = 1;
        uVar2 = FUN_03853b94();
        if ((uVar2 < DAT_052ae888) &&
           (uVar1 = *(ushort *)(DAT_052ae890 + (long)(int)uVar2 * 2), uVar1 < 0x20)) {
          return (uint)uVar1;
        }
        goto LAB_01a1171c;
      }
    }
    *param_2 = 0;
    uVar2 = DAT_052d1e28;
  }
  return uVar2;
}

