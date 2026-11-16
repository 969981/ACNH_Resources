
void FUN_025a2bb0(long param_1,ushort *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    local_28 = 0xb00000009;
    FUN_02602950(param_1,*(undefined4 *)((long)&local_28 + (long)*(int *)(param_1 + 0x30) * 4));
    uVar2 = (uint)*param_2;
    if (0x27 < *param_2) {
      uVar2 = 0x28;
    }
    uVar4 = (ulong)uVar2;
    if (uVar2 != 0) {
      do {
        lVar3 = *(long *)(param_1 + 0x28);
        lVar1 = nn::prepo::Array::GetBuffer();
        if (lVar1 != 0) {
          nn::prepo::Array::Add(lVar3 + 8);
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "RecipeArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

