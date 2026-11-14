
void FUN_01d4e024(long param_1)

{
  undefined8 *__s;
  bool bVar1;
  code *pcVar2;
  long *local_50;
  long local_48;
  long *local_40;
  long **local_38;
  
  *(undefined1 *)(param_1 + 0xab9) = 0;
  __s = (undefined8 *)(param_1 + 0x7c8);
  bVar1 = *(int *)(param_1 + 0xaa0) != 3;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x8cc) = 0;
    *(undefined8 *)(param_1 + 0x8c4) = 0;
    *(undefined8 *)(param_1 + 0x8bc) = 0;
    *(undefined8 *)(param_1 + 0x8b4) = 0;
    *(undefined8 *)(param_1 + 0x8ac) = 0;
    *(undefined8 *)(param_1 + 0x8a4) = 0;
    *(undefined8 *)(param_1 + 0x89c) = 0;
    *(undefined8 *)(param_1 + 0x894) = 0;
    *(undefined8 *)(param_1 + 0x88c) = 0;
    *(undefined8 *)(param_1 + 0x884) = 0;
    *(undefined8 *)(param_1 + 0x87c) = 0;
    *(undefined8 *)(param_1 + 0x874) = 0;
    *(undefined8 *)(param_1 + 0x86c) = 0;
    *(undefined8 *)(param_1 + 0x864) = 0;
    *(undefined8 *)(param_1 + 0x85c) = 0;
    *(undefined8 *)(param_1 + 0x854) = 0;
    *(undefined8 *)(param_1 + 0x84c) = 0;
    *(undefined8 *)(param_1 + 0x844) = 0;
    *(undefined8 *)(param_1 + 0x83c) = 0;
    *(undefined8 *)(param_1 + 0x834) = 0;
    *(undefined8 *)(param_1 + 0x82c) = 0;
    *(undefined8 *)(param_1 + 0x824) = 0;
    *(undefined8 *)(param_1 + 0x81c) = 0;
    *(undefined8 *)(param_1 + 0x814) = 0;
    *(undefined8 *)(param_1 + 0x80c) = 0;
    *(undefined8 *)(param_1 + 0x804) = 0;
    *(undefined8 *)(param_1 + 0x7fc) = 0;
    *(undefined8 *)(param_1 + 0x7f4) = 0;
    *(undefined8 *)(param_1 + 0x7ec) = 0;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    *__s = 0;
    *(undefined8 *)(param_1 + 2000) = 0;
  }
  else {
    memset(__s,0,0x118);
    *(undefined2 *)(param_1 + 0x8d8) = 0xffff;
  }
  *(uint *)(param_1 + 0x8e0) = (uint)!bVar1;
  pcVar2 = (code *)(&PTR_FUN_04a597f0)[!bVar1];
  *(undefined1 *)(param_1 + 0x7e8) = 2;
  *(undefined2 *)(param_1 + 0x8d0) = 0;
  local_48 = param_1;
  local_40 = &local_48;
  local_38 = &local_40;
  (*pcVar2)(&local_38,__s);
  local_50 = &local_48;
  local_48 = param_1;
  local_40 = (long *)&local_50;
  if (*(uint *)(param_1 + 0x8e0) != 0xffffffff) {
    local_40 = (long *)&local_50;
    local_38 = &local_40;
    (*(code *)(&PTR_LAB_04a59800)[*(uint *)(param_1 + 0x8e0)])(&local_38,__s);
    if (*(uint *)(param_1 + 0x8e0) != 0xffffffff) {
      local_38 = &local_40;
      (*(code *)(&PTR_LAB_04a59810)[*(uint *)(param_1 + 0x8e0)])(&local_38,__s);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00d72dc0();
}

