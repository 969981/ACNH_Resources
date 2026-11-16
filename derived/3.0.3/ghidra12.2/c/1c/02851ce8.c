
void FUN_02851ce8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_28;
  char *pcStack_20;
  undefined4 local_18;
  char local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  uVar2 = local_28;
  if (((DAT_054542d0._4_4_ >> 3 & 1) != 0) && (*(char *)(param_1 + 0xef) == '\x02')) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ & 0xfffffff7;
    local_28 = (undefined *)CONCAT44(local_28._4_4_,3);
    cVar1 = *(char *)(param_1 + 0xec);
    *(undefined1 *)(param_1 + 0xef) = 3;
    puVar3 = &DAT_053fe348 + (ulong)(uint)(int)cVar1 * 0xba0;
    if (9 < (uint)(int)cVar1) {
      puVar3 = &DAT_053fe348;
    }
    if ((*(long *)(puVar3 + 0xaa0) == 0) || (*(int *)(*(long *)(puVar3 + 0xaa0) + 4) != 0x13)) {
      if (*(int *)(puVar3 + 0xa94) == 0x13) {
        *(undefined2 *)(puVar3 + 0xa98) = 0;
        puVar3[0xa9a] = 0;
        *(undefined8 *)(puVar3 + 0xa90) = 0x22001d0005;
        local_18 = 0x13;
        local_12 = 1;
        local_28 = (undefined *)CONCAT26((ushort)((ulong)uVar2 >> 0x30) & 0xff00,0xff0000000000);
        local_13 = 0x13;
        local_14 = cVar1;
        if (-1 < DAT_053d0e00) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e00,&local_28,&local_14,3,0);
        }
      }
    }
    else {
      FUN_0214eb90(puVar3 + 0x8b0,(long)cVar1,1);
    }
    local_28 = PTR_DAT_04bb2020 + 0x10;
    pcStack_20 = "FinishTreasureQuestByRollback";
    FUN_0273f3c4(&local_28,1);
  }
  return;
}

