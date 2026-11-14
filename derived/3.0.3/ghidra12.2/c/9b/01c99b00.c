
void FUN_01c99b00(uint *param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong __size;
  ulong *puVar6;
  ulong uVar7;
  
  lVar3 = DAT_05ae7600;
  if (0 < (int)param_2) {
    uVar7 = (ulong)param_2;
    __size = uVar7 * 0x1040 | 8;
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(__size);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_3 = (long *)(lVar3 + 8);
        if (lVar4 != 0) {
          param_3 = (long *)(lVar4 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar5 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
    }
    if (puVar5 != (ulong *)0x0) {
      puVar6 = puVar5 + 1;
      *puVar5 = uVar7;
      puVar1 = PTR_DAT_04bbd6c0 + 0x10;
      puVar5 = puVar6;
      do {
        FUN_00309f4c(puVar5);
        *(undefined4 *)((long)puVar5 + 0xdfc) = 0;
        memset(puVar5 + 0x17d,0,0x212);
        nn::friends::Friend::Friend((Friend *)(puVar5 + 0x1c0));
        *(undefined4 *)(puVar5 + 0x202) = 0x10;
        *(undefined2 *)((long)puVar5 + 0x1032) = 0;
        puVar5[0x201] = (long)puVar5 + 0x1014;
        *(undefined2 *)((long)puVar5 + 0x1014) = 0;
        puVar5[0x200] = (ulong)puVar1;
        puVar2 = puVar5 + 0x208;
        *(undefined1 *)((long)puVar5 + 0x103c) = 0;
        puVar5 = puVar2;
      } while (puVar2 != puVar6 + uVar7 * 0x208);
      *param_1 = param_2;
      *(ulong **)(param_1 + 2) = puVar6;
    }
  }
  return;
}

