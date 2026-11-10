
void FUN_0014d334(long param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x40) == '\0') {
    pcVar6 = "FALSE";
    puVar5 = &DAT_0407ebb1;
  }
  else {
    puVar5 = &DAT_0407ebb1;
    if ((pcVar7 != (char *)0x0) && (puVar5 = &DAT_0407ebb1, *pcVar7 != '.')) {
      puVar5 = (undefined8 *)&DAT_0407ec0b;
    }
    pcVar6 = "TRUE";
  }
  pcVar1 = "unknown";
  if (pcVar7 != (char *)0x0) {
    pcVar1 = pcVar7;
  }
  puVar2 = &DAT_04079e84;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
  }
  puVar3 = &DAT_0407ebb1;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  pcVar7 = "FALSE";
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar7 = "TRUE";
  }
  pcVar4 = "";
  if (*(char *)(param_1 + 0x5a) != '\0') {
    pcVar4 = "#HttpOnly_";
  }
  FUN_00146120("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar4,puVar5,pcVar1,pcVar6,puVar2,pcVar7,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),puVar3);
  return;
}

