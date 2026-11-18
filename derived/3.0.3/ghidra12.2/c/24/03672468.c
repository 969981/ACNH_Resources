
void FUN_03672468(long param_1,int param_2,ulong param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x13e48);
  if (*(int *)(param_1 + 0x388) == 6) {
    *(undefined2 *)(param_1 + 0x13e50) = 0;
    *(undefined1 *)(param_1 + 0x13e52) = 0;
    *(undefined8 *)(param_1 + 0x13e7c) = 0xffffffff00000000;
    *(undefined8 *)(param_1 + 0x13ec8) = 2;
    *(undefined4 *)(param_1 + 0x13e64) = 0xff;
    *(undefined8 *)(param_1 + 0x13ef0) = 0;
    *(undefined8 *)(param_1 + 0x13f38) = 0;
    *(undefined8 *)(param_1 + 0x13f40) = 0;
    *(undefined8 *)(param_1 + 0x13f45) = 0;
    *(undefined4 *)(param_1 + 0x13f58) = 0xff;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\x01';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(undefined8 *)(param_1 + 0x13e54) = 0;
    *(undefined8 *)(param_1 + 0x13e5c) = 0;
    *(undefined8 *)(param_1 + 0x13e88) = 0;
    *(undefined1 *)(param_1 + 0x13e90) = 0;
    *(undefined2 *)(param_1 + 0x13ed8) = 0;
    *(undefined8 *)(param_1 + 0x13edc) = 0;
    *(undefined4 *)(param_1 + 0x13ed4) = 0;
    *(undefined8 *)(param_1 + 0x13f18) = 0;
    *(undefined1 *)(param_1 + 0x13f20) = 0;
    *(undefined8 *)(param_1 + 0x13f2d) = 0;
    *(undefined8 *)(param_1 + 0x13f28) = 0;
    *(undefined8 *)(param_1 + 0x13f50) = 0x6600000003;
    *(undefined1 *)(param_1 + 0x13f5c) = 0;
    *(undefined8 *)(param_1 + 0x13e68) = 0;
    *(undefined8 *)(param_1 + 0x13e70) = 0;
    *(undefined4 *)(param_1 + 0x13e77) = 0;
    *(undefined8 *)(param_1 + 0x13ef8) = 0;
    *(undefined8 *)(param_1 + 0x13f00) = 0;
    *(undefined8 *)(param_1 + 0x13f08) = 0;
    *(undefined8 *)(param_1 + 0x13f10) = 0;
    memset((void *)(param_1 + 0x13f5e),0,0x408e);
    *(undefined8 *)(param_1 + 0x17ff0) = 0;
    *(undefined4 *)(param_1 + 0x18000) = 0;
    *(undefined8 *)(param_1 + 0x18450) = 0;
    *(undefined8 *)(param_1 + 0x18458) = 0;
    *(undefined8 *)(param_1 + 0x18460) = 0;
    *(undefined8 *)(param_1 + 0x18468) = 0;
    *(undefined4 *)(param_1 + 0x13f24) = 0;
    FUN_03ffbf40(0x469ac15f,(undefined8 *)(param_1 + 0x17ff0),0x6d3d34000000,0x5dc000000000);
    *(undefined8 *)(param_1 + 0x184c0) = 0;
    *(undefined8 *)(param_1 + 0x184b8) = 0;
    *(undefined8 *)(param_1 + 0x184b0) = 0;
    *(undefined8 *)(param_1 + 0x184a8) = 0;
    *(undefined4 *)(param_1 + 0x184cf) = 0;
    *(undefined8 *)(param_1 + 0x184c8) = 0;
    *(undefined8 *)(param_1 + 0x184a0) = 0;
    *(undefined8 *)(param_1 + 0x18498) = 0;
    *(undefined2 *)(param_1 + 0x18628) = 0;
    *(undefined8 *)(param_1 + 0x18490) = 0;
    *(undefined8 *)(param_1 + 0x18488) = 0;
    *(undefined8 *)(param_1 + 0x18480) = 0;
    *(undefined1 *)(param_1 + 0x18610) = 0;
    *(undefined8 *)(param_1 + 0x18618) = 0;
    *(undefined8 *)(param_1 + 0x18620) = 0;
    *pcVar1 = '\x01';
    if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03672600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_03672604 + (ulong)(byte)(&DAT_04198cba)[param_2 - 2] * 4))();
      return;
    }
    if (*(char *)(param_1 + 0x18698) == '\0') {
      if (*(char *)(param_1 + 100000) == '\0') {
        *(undefined1 *)(param_1 + 0x18694) = 1;
        if ((*pcVar1 != '\0') && (*(int *)(param_1 + 0x13e80) == -1)) {
          (**(code **)(param_1 + 0x18668))(0,0,*(undefined8 *)(param_1 + 0x18640));
          *(undefined4 *)(param_1 + 0x13e80) = 0;
          *(undefined8 *)(param_1 + 0x13e88) = *(undefined8 *)(param_1 + 0x13e98);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x18694) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x18694) = 0;
      *(undefined4 *)(param_1 + 0x1868c) = *(undefined4 *)(param_1 + 0x1869c);
    }
  }
  else {
    *pcVar1 = '\0';
  }
  return;
}

