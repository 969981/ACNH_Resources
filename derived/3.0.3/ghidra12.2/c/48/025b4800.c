
void FUN_025b4800(long param_1,int *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    local_58 = 0x4b0000004a;
    FUN_02602950(param_1,*(undefined4 *)((long)&local_58 + (long)*(int *)(param_1 + 0x30) * 4));
    puVar2 = PTR_DAT_04bb2020;
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "MuseumLevel";
    iVar3 = FUN_02b5a890();
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_68,(long)iVar3);
    }
    if (0 < *param_2) {
      uVar6 = 0;
      piVar7 = param_2 + 1;
      do {
        piVar1 = piVar7;
        if (0x27 < uVar6) {
          piVar1 = param_2 + 1;
        }
        FUN_0277d6c4(piVar1);
        lVar5 = *(long *)(param_1 + 0x28);
        lVar4 = nn::prepo::Array::GetBuffer();
        if (lVar4 != 0) {
          nn::prepo::Array::Add(lVar5 + 8);
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 2;
      } while ((long)uVar6 < (long)*param_2);
    }
    local_68 = puVar2 + 0x10;
    pcStack_60 = "ItemArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_68,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

