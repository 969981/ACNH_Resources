
void FUN_02cac4e4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  
  plVar7 = param_2 + 4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pcVar6 = (char *)param_2[5];
  if (pcVar6 != "") {
    if (*pcVar6 == '/') {
      if (pcVar6[1] != 'L') {
        return;
      }
      if (pcVar6[2] != '_') {
        return;
      }
      if (pcVar6[3] != 'C') {
        return;
      }
      if (pcVar6[4] != 'h') {
        return;
      }
      if (pcVar6[5] != 'a') {
        return;
      }
      if (pcVar6[6] != 't') {
        return;
      }
      if (pcVar6[7] != 'B') {
        return;
      }
      if (pcVar6[8] != 'a') {
        return;
      }
      if (pcVar6[9] != 'l') {
        return;
      }
      if (pcVar6[10] != 'l') {
        return;
      }
      if (pcVar6[0xb] != 'o') {
        return;
      }
      if (pcVar6[0xc] != 'o') {
        return;
      }
      if (pcVar6[0xd] != 'n') {
        return;
      }
      if (pcVar6[0xe] != '_') {
        return;
      }
      puVar8 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      uVar2 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4fe8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (((DAT_05664cf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05664cf8), iVar1 != 0)) {
        DAT_05664c18 = PTR_DAT_04bb2020 + 0x10;
        DAT_05664c20 = &DAT_040fe5ab;
        DAT_05664c30 = &DAT_0407ebb1;
        DAT_05664c50 = &DAT_0407ebb1;
        DAT_05664c70 = &DAT_0407ebb1;
        DAT_05664c40 = "Color";
        DAT_05664c60 = "BeakOff";
        DAT_05664c80 = &DAT_040f4153;
        DAT_05664ca0 = "InStick";
        DAT_05664cc0 = "InEffet";
        DAT_05664c90 = &DAT_0407ebb1;
        DAT_05664cb0 = &DAT_0407ebb1;
        DAT_05664cd0 = &DAT_0407ebb1;
        DAT_05664ce0 = "FastOut";
        DAT_05664cf0 = &DAT_0407ebb1;
        DAT_05664c28 = DAT_05664c18;
        DAT_05664c38 = DAT_05664c18;
        DAT_05664c48 = DAT_05664c18;
        DAT_05664c58 = DAT_05664c18;
        DAT_05664c68 = DAT_05664c18;
        DAT_05664c78 = DAT_05664c18;
        DAT_05664c88 = DAT_05664c18;
        DAT_05664c98 = DAT_05664c18;
        DAT_05664ca8 = DAT_05664c18;
        DAT_05664cb8 = DAT_05664c18;
        DAT_05664cc8 = DAT_05664c18;
        DAT_05664cd8 = DAT_05664c18;
        DAT_05664ce8 = DAT_05664c18;
        __cxa_guard_release(&DAT_05664cf8);
      }
      if (((DAT_05664d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05664d10), iVar1 != 0)) {
        DAT_05664d00 = 0x700000002;
        DAT_05664d08 = &DAT_05664c18;
        __cxa_guard_release(&DAT_05664d10);
      }
      if (((DAT_05664d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05664d38), iVar1 != 0)) {
        DAT_05664d18 = PTR_DAT_04bb2020 + 0x10;
        DAT_05664d20 = "@T_Msg_00";
        DAT_05664d30 = "@T_Name_00";
        DAT_05664d28 = DAT_05664d18;
        __cxa_guard_release(&DAT_05664d38);
      }
      if (((DAT_05664d70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05664d70), iVar1 != 0)) {
        DAT_05664d40 = PTR_DAT_04bb2020 + 0x10;
        DAT_05664d48 = "B_Size_00";
        DAT_05664d68 = "N_BeakPos_00";
        DAT_05664d58 = "N_Pos_00";
        DAT_05664d50 = DAT_05664d40;
        DAT_05664d60 = DAT_05664d40;
        __cxa_guard_release(&DAT_05664d70);
      }
      local_58 = *param_2;
      local_48 = &DAT_04ab5750;
      local_40 = &DAT_05664d00;
      local_38 = 0;
      local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
      local_50 = &DAT_04ab5760;
      FUN_0386e230(puVar8[2] + 0x208,puVar8[2],&local_60);
      lVar5 = *(long *)PTR_DAT_04bb2698;
      if (lVar5 == 0) {
        pvVar4 = malloc(0x50);
      }
      else {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar8 = (undefined8 *)(lVar5 + 8);
        if (lVar3 != 0) {
          puVar8 = (undefined8 *)(lVar3 + 0xa8);
        }
        pvVar4 = (void *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x50,8);
      }
      FUN_02cab060(pvVar4,*param_2);
      *(void **)(*(long *)(param_2[1] + 8) + 0x1b0) = pvVar4;
      return;
    }
    if (*pcVar6 != '\0') {
      return;
    }
  }
  if (param_2[1] != 0) {
    local_50 = (undefined *)0x0;
    local_48 = (undefined *)0x0;
    local_58 = *param_2;
    local_40 = (undefined8 *)0x0;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    local_38 = 0;
    lVar5 = *(long *)(param_2[1] + 0x10);
    FUN_0386e230(lVar5 + 0x200,lVar5,&local_60);
  }
  return;
}

