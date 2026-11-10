
void FUN_001fddb0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auStack_90 [16];
  undefined *local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined **local_48;
  
  puVar7 = param_2 + 1;
  FUN_00202558(param_2,*puVar7);
  param_2[2] = 0;
  *param_2 = puVar7;
  *puVar7 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x18);
  if (3 < (ulong)(lVar6 - lVar2)) {
    uVar3 = *(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar2);
    uVar8 = (ulong)uVar3;
    *(long *)(param_1 + 0x18) = lVar2 + 4;
    puVar4 = PTR_piecewise_construct_04bcbf80;
    if (uVar8 <= (ulong)(lVar6 - (lVar2 + 4)) && uVar3 >> 0x10 == 0) {
      if (uVar3 == 0) {
        return;
      }
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      do {
        local_78[0] = 0;
        uStack_60 = 0x10;
        local_80 = puVar1;
        local_68 = local_78;
        FUN_0018d610(auStack_90);
        FUN_001f719c(param_1,&local_80);
        FUN_001f7468(param_1,auStack_90);
        local_48 = &local_80;
        lVar5 = FUN_00203760(param_2,&local_80,puVar4,&local_48,&uStack_51);
        FUN_0018d620(lVar5 + 0x48,auStack_90);
        FUN_0018d854(auStack_90);
        local_80 = puVar1;
        FUN_0018b1a0(&local_80);
        uVar3 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar3;
      } while (uVar3 != 0);
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

