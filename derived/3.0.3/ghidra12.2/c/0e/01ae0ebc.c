
/* WARNING: Type propagation algorithm not settling */

bool FUN_01ae0ebc(uint param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  
  if ((((0 < (int)param_1) && ((int)param_1 < 0x15)) && (0 < param_2)) && (param_2 < 0x15)) {
    if ((int)*(uint *)(DAT_0532a7f8 + 0x1c0) < 1) {
      if (*(long *)(DAT_0532a7f8 + 0xb0) == 0) {
        return false;
      }
      puVar3 = *(uint **)(*(long *)(DAT_0532a7f8 + 0xb0) + 8);
      if (puVar3 == (uint *)0x0) {
        return false;
      }
      if ((param_1 < *(uint *)(DAT_0532a7f8 + 200)) &&
         (*(char *)(*(long *)(DAT_0532a7f8 + 0xd0) + (long)(int)param_1) == '\0')) {
        return false;
      }
      if (*puVar3 <= param_1) {
        return false;
      }
      if (puVar3[1] == 0) {
        return false;
      }
      if ((ushort)puVar3[2] == 0) {
        return false;
      }
      iVar4 = 0xc;
      if (*(char *)((long)puVar3 + 10) != '\0') {
        iVar4 = 0x1c;
      }
      lVar1 = (ulong)(puVar3[1] * param_1 + (uint)(ushort)puVar3[2] * 8 + iVar4) + (long)puVar3;
    }
    else {
      if (*(uint *)(DAT_0532a7f8 + 0x1c0) <= param_1) {
        return false;
      }
      if (*(uint *)(DAT_0532a7f8 + 0x1b0) <= param_1) {
        param_1 = 0;
      }
      lVar1 = *(long *)(*(long *)(DAT_0532a7f8 + 0x1b8) + (ulong)param_1 * 8);
    }
    if (lVar1 == 0) {
      return false;
    }
    switch(param_2) {
    case 1:
      pcVar2 = (char *)FUN_01a617a0(lVar1,6,0x84432956,DAT_0532ad10);
      break;
    case 2:
      pcVar2 = (char *)FUN_01a617a0(lVar1,1,0x8a647661,DAT_0532ad18);
      break;
    case 3:
      pcVar2 = (char *)FUN_01a617a0(lVar1,3,0xa604b7cf,DAT_0532ad20);
      break;
    case 4:
      pcVar2 = (char *)FUN_01a617a0(lVar1,5,0xef1f311c,DAT_0532ad28);
      break;
    case 5:
      pcVar2 = (char *)FUN_01a617a0(lVar1,2,0x9f9b91e9,DAT_0532ad30);
      break;
    case 6:
      pcVar2 = (char *)FUN_01a617a0(lVar1,8,0x3594f417,DAT_0532ad38);
      break;
    default:
      goto switchD_01ae0f60_caseD_7;
    case 0xc:
      pcVar2 = (char *)FUN_01a617a0(lVar1,7,0xaa4f6b89,DAT_0532ad40);
      break;
    case 0xd:
      pcVar2 = (char *)FUN_01a617a0(lVar1,4,0xb2ac5428,DAT_0532ad48);
    }
    if (pcVar2 != (char *)0x0) {
      return *pcVar2 != '\0';
    }
  }
switchD_01ae0f60_caseD_7:
  return false;
}

