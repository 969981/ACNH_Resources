
/* WARNING: Removing unreachable block (ram,0x00149eec) */
/* WARNING: Removing unreachable block (ram,0x00149de4) */
/* WARNING: Removing unreachable block (ram,0x00149dc8) */
/* WARNING: Removing unreachable block (ram,0x00149dac) */
/* WARNING: Removing unreachable block (ram,0x00149d90) */
/* WARNING: Removing unreachable block (ram,0x00149d70) */
/* WARNING: Removing unreachable block (ram,0x00149ed0) */
/* WARNING: Removing unreachable block (ram,0x00149e58) */
/* WARNING: Removing unreachable block (ram,0x00149e98) */
/* WARNING: Removing unreachable block (ram,0x00149e20) */
/* WARNING: Removing unreachable block (ram,0x00149eb4) */
/* WARNING: Removing unreachable block (ram,0x00149e3c) */
/* WARNING: Removing unreachable block (ram,0x00149e74) */
/* WARNING: Removing unreachable block (ram,0x00149e00) */
/* WARNING: Removing unreachable block (ram,0x00149f08) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x00149d7c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00149a00(long *param_1,int param_2)

{
  undefined4 uVar1;
  ulong local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    uVar1 = 6;
    if (param_2 < 0x271b) {
      switch(param_2) {
      case 3:
        uVar1 = 0;
        param_1[0x1d] = local_60 & 2;
        break;
      case 4:
      case 5:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        break;
      case 6:
        uVar1 = 0;
        param_1[0x2a] = local_60;
        break;
      case 7:
        uVar1 = 0;
        param_1[0x2b] = local_60;
        break;
      case 8:
        uVar1 = 0;
        param_1[0x2d] = local_60;
        break;
      case 0xd:
        uVar1 = 0;
        param_1[0x2c] = local_60;
        break;
      default:
        if (param_2 == 0x2712) {
          uVar1 = 0;
          param_1[0xd] = local_60;
        }
        else if (param_2 == 0x2715) {
          uVar1 = 0;
          param_1[0x39] = local_60;
        }
      }
    }
    else if (param_2 < 0x4e24) {
      if (param_2 < 0x271f) {
        if (param_2 == 0x271b) {
          uVar1 = FUN_001669ac(local_60,param_1 + 0x30);
        }
        else {
          if (param_2 != 0x271c) {
            return 6;
          }
          uVar1 = FUN_00166b34(local_60,param_1 + 0x34);
        }
      }
      else if (param_2 == 0x271f) {
        uVar1 = 0;
        param_1[0xf] = local_60;
      }
      else if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[0xc] = local_60;
      }
    }
    else if (param_2 < 0x7539) {
      if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x38] = local_60;
      }
      else if (param_2 == 0x4e2e) {
        uVar1 = 0;
        param_1[0xe] = local_60;
      }
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x2e] = local_60;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x2f] = local_60;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}

