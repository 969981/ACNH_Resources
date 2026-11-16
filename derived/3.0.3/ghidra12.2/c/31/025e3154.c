
void FUN_025e3154(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(byte *)(param_1 + 0x18) < 8) {
      local_50 = (undefined *)CONCAT71(local_50._1_7_,*(byte *)(param_1 + 0x18));
      lVar1 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
    }
    else {
      if (*(int *)(param_1 + 0x1c) == -1) {
        return;
      }
      if (*(long *)PTR_DAT_04bb46b0 == 0) {
        return;
      }
      lVar1 = FUN_026eec4c();
    }
    if (lVar1 != 0) {
      if ((*(long **)(lVar1 + 0x18cc0) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x18cc0), puVar2 == (undefined8 *)0x0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar3 = uVar3 & 0xffffffff;
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar4 = nn::prepo::Struct::GetBuffer();
      if (lVar4 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x40e0339);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar4 = nn::prepo::Struct::GetBuffer();
      if (lVar4 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x408d8ec);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar4 = nn::prepo::Struct::GetBuffer();
      if (lVar4 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x409d081);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar4 = nn::prepo::Struct::GetBuffer();
      if (lVar4 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x4063341);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      lVar4 = nn::prepo::Struct::GetBuffer();
      if (lVar4 != 0) {
        nn::prepo::Struct::Add((char *)(lVar5 + 8),0x40e0344);
      }
      if (*(long *)(param_1 + 8) != 0) {
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "HandleName";
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x30));
      }
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x18cc0) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x18cc0) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  return;
}

