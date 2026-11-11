
long FUN_003cc870(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  
  uVar7 = *(uint *)(param_1 + 0x90);
  lVar8 = *(long *)(param_1 + 0x30);
  if ((int)uVar7 < 2) {
    uVar7 = 1;
  }
  if (0x17 < (int)uVar7) {
    uVar7 = 0x18;
  }
  local_68 = (ulong)*(byte *)(param_1 + 0x96) << 8 | (ulong)uVar7 << 0x20 |
             (ulong)*(byte *)(param_1 + 0x95);
  uVar3 = FUN_003cb1d8();
  lVar4 = FUN_003cb258(uVar3,*(undefined4 *)(param_1 + 0x58),&local_68);
  local_60 = *(ulong *)(param_1 + 0x50);
  local_47 = 0;
  local_58 = *(undefined4 *)(param_1 + 0x58);
  local_50 = 0x1e00000001;
  local_38 = 0;
  uStack_54 = *(undefined4 *)(param_1 + 100);
  local_42 = 1;
  local_40 = *(undefined1 *)(param_1 + 0x73);
  local_48 = *(undefined1 *)(param_1 + 0x60);
  lVar4 = lVar4 + lVar8 + *(long *)(param_1 + 8);
  local_44 = *(undefined1 *)(param_1 + 0x62);
  local_3c = *(undefined4 *)(param_1 + 0x7c);
  local_3f = *(undefined1 *)(param_1 + 0x79);
  local_43 = *(undefined1 *)(param_1 + 99);
  local_45 = *(undefined1 *)(param_1 + 0x76);
  local_41 = *(undefined1 *)(param_1 + 0x78);
  local_3e = *(undefined2 *)(param_1 + 0x7a);
  local_37 = *(undefined1 *)(param_1 + 0x94);
  local_36 = *(undefined1 *)(param_1 + 0x97);
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x8c) != -1) {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  FUN_003b4ed8(&local_60,local_41,local_45,*(undefined1 *)(param_1 + 0x77),
               *(undefined1 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x71),
               *(undefined1 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),iVar1);
  if (*(char *)(param_1 + 0x60) == '\0') {
    lVar4 = lVar4 + 0x1000;
    cVar2 = *(char *)(param_1 + 0x62);
  }
  else {
    uVar3 = FUN_03b38a74();
    lVar8 = FUN_003b5b10(uVar3,&local_60);
    lVar4 = lVar4 + lVar8 * 3 + 0x1040;
    cVar2 = *(char *)(param_1 + 0x62);
  }
  if (cVar2 != '\0') {
    uVar3 = FUN_03b38a74();
    lVar8 = FUN_003b5338(uVar3,&local_60);
    lVar4 = lVar8 + lVar4;
  }
  uVar3 = FUN_03b38a74();
  lVar8 = FUN_003b5164(uVar3,&local_60);
  uVar3 = FUN_003c5b84();
  lVar5 = FUN_003c5c90(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  uVar3 = FUN_003c5c08();
  lVar6 = FUN_003c5c90(uVar3,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  lVar8 = lVar4 + lVar8 + lVar5 + lVar6 + 0x1000;
  if ((*(char *)(param_1 + 99) != '\0') && (*(char *)(param_1 + 0x75) != '\0')) {
    lVar4 = FUN_003ccac0(param_1);
    lVar8 = lVar4 + lVar8;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    uVar7 = *(uint *)(param_1 + 0x90);
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    if (0x17 < (int)uVar7) {
      uVar7 = 0x18;
    }
    local_60 = (ulong)*(byte *)(param_1 + 0x96) << 8 | (ulong)uVar7 << 0x20 |
               (ulong)*(byte *)(param_1 + 0x95);
    uVar3 = FUN_003cc20c();
    lVar4 = FUN_003cc29c(uVar3,*(int *)(param_1 + 0x58) << 1,&local_60);
    uVar3 = FUN_03b38a74();
    lVar5 = FUN_003b5330(uVar3,*(undefined4 *)(param_1 + 0x58));
    lVar8 = lVar8 + (lVar4 + lVar5 + 0xfffU & 0xfffffffffffff000) + 0x1000;
  }
  return lVar8;
}

